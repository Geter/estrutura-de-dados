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

    // 1. Tabela com nome do aluno e nota
    unordered_multimap<string, double> notas;

    // 2. Inserir 3 notas para o mesmo aluno
    notas.insert({"Zezinho da Silva", 5.5});
    notas.insert({"Zezinho da Silva", 6.0});
    notas.insert({"Zezinho da Silva", 7.5});

    // 3. Quantas notas o aluno possui?
    cout << "Zezinho da Silva possui " << notas.count("Zezinho da Silva") << " notas." << endl;

    // 4. Listando todas as notas do aluno
    auto faixa = notas.equal_range("Zezinho da Silva");

    cout << "Notas de Zezinho da Silva:" << endl;

    for (auto it = faixa.first; it != faixa.second; it++) {
        cout << it->second << endl;
    }

    // 5. Remover todas as notas do aluno
    notas.erase("Zezinho da Silva");

    cout << "Tamanho da tabela depois da remocao: "
         << notas.size() << endl;

    return 0;
}
