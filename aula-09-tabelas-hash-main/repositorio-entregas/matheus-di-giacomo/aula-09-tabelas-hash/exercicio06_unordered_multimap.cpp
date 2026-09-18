// ============================================================
// Exercicio 06 - unordered_multimap
// ============================================================
// Pares chave e valor, mas a mesma chave pode ter varios
// valores. Nao usa o operador [], usa insert().
//
// Para percorrer todos os valores de uma chave use equal_range,
// que devolve o inicio e o fim das ocorrencias.
//
// O que voce deve fazer:
//   1. Crie uma tabela onde a chave e o nome de um aluno e o
//      valor e uma nota.
//   2. Insira pelo menos 3 notas para o mesmo aluno.
//   3. Use count() para mostrar quantas notas esse aluno tem.
//   4. Use equal_range() para listar todas as notas dele.
//   5. Use erase() para remover todas as notas de um aluno e
//      confirme com size().
// ============================================================

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    // 1. Crie uma tabela onde a chave e o nome de um aluno e o valor e uma nota.
    unordered_multimap<string, double> notasAlunos;

    // 2. Insira pelo menos 3 notas para o mesmo aluno.
    notasAlunos.insert({"Ana", 8.5});
    notasAlunos.insert({"Ana", 9.0});
    notasAlunos.insert({"Ana", 7.5});
    notasAlunos.insert({"Carlos", 6.0});

    // 3. Use count() para mostrar quantas notas esse aluno tem.
    string alunoBuscado = "Ana";
    cout << "O aluno " << alunoBuscado << " tem " << notasAlunos.count(alunoBuscado) << " notas." << endl;

    // 4. Use equal_range() para listar todas as notas dele.
    cout << "Notas de " << alunoBuscado << ":" << endl;
    auto range = notasAlunos.equal_range(alunoBuscado);
    for (auto it = range.first; it != range.second; ++it) {
        cout << "- " << it->second << endl;
    }

    // 5. Use erase() para remover todas as notas de um aluno e confirme com size().
    cout << "Tamanho antes de remover Carlos: " << notasAlunos.size() << endl;
    notasAlunos.erase("Carlos");
    cout << "Tamanho apos remover Carlos (notas restantes): " << notasAlunos.size() << endl;

    return 0;
}