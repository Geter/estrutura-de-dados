// ============================================================
// Exercicio 08 - map
// ============================================================
// Igual ao unordered_map, mas sempre ordenado pela chave.
// O acesso e O(log n), porque usa arvore balanceada.
//
// O que voce deve fazer:
//   1. Crie um map com 5 alunos e suas notas finais.
//   2. Exiba todos com for. Observe a ordem da saida.
//   3. Faca o mesmo com unordered_map e compare as duas saidas.
//   4. Registre em um comentario qual foi a diferenca.
//   5. Em que situacao valeria a pena aceitar O(log n) em troca
//      da ordem?
// ============================================================

#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    map<string, double> alunos = {
        {"Carlos", 8.5},
        {"Ana", 9.0},
        {"Bruno", 7.5},
        {"Daniela", 8.0},
        {"Fernanda", 9.5}
    };

    cout << "Com map:\n";
    for (auto& aluno : alunos) {
        cout << aluno.first << " - " << aluno.second << endl;
    }

    unordered_map<string, double> alunosHash = {
        {"Carlos", 8.5},
        {"Ana", 9.0},
        {"Bruno", 7.5},
        {"Daniela", 8.0},
        {"Fernanda", 9.5}
    };

    cout << "\nCom unordered_map:\n";
    for (auto& aluno : alunosHash) {
        cout << aluno.first << " - " << aluno.second << endl;
    }

    // O map mostra os alunos em ordem alfabetica. O unordered_map
    // nao garante uma ordem especifica.
    // Vale aceitar O(log n) quando a ordem dos dados for importante,
    // por exemplo para apresentar uma lista ordenada.

    return 0;
}
