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

    unordered_multimap<string, string> aluno;

    aluno.insert({"Gabriel", "Nota: 10"});
    aluno.insert({"Gabriel", "Nota: 8"});
    aluno.insert({"Gabriel", "Nota: 4"});

    cout << "Quantidade de notas: "
         << aluno.count("Gabriel") << endl;

    auto notas = aluno.equal_range("Gabriel");

    cout << "\nNotas do Gabriel:" << endl;

    for (auto it = notas.first; it != notas.second; ++it) {
        cout << it->first << " - " << it->second << endl;
    }

    aluno.erase("Gabriel");

    cout << "\nQuantidade de elementos apos apagar: "
         << aluno.size() << endl;

    return 0;
}