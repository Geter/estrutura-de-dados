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
    map<string, float> alunos = {
        {"Carlos", 8.0},
        {"Ana", 9.5},
        {"Eduardo", 7.0},
        {"Bruno", 6.5},
        {"Daniel", 8.5}
    };

    for (auto& aluno : alunos) {
        cout << aluno.first << " " << aluno.second << endl;
    }

    unordered_map<string, float> alunosHash = {
        {"Carlos", 8.0},
        {"Ana", 9.5},
        {"Eduardo", 7.0},
        {"Bruno", 6.5},
        {"Daniel", 8.5}
    };

    for (auto& aluno : alunosHash) {
        cout << aluno.first << " " << aluno.second << endl;
    }

    // map exibe em ordem pela chave, o unordered_map não garante ordem.
    // vale a pena usar map quando for preciso dos dados sempre ordenados.

    return 0;
}
