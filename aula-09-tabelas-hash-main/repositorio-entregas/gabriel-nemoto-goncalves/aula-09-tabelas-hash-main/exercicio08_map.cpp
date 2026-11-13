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

    map<string, double> alunosMap;
    unordered_map<string, double> alunosUMap;
    
    alunosMap["Ana"] = 8.5;
    alunosMap["Pedrinho"] = 0;
    alunosMap["Carlos"] = 7.5;
    alunosMap["Maria"] = 9.0;
    alunosMap["João"] = 6.5;
    
    alunosUMap["Ana"] = 8.5;
    alunosUMap["Pedrinho"] = 0;
    alunosUMap["Carlos"] = 7.5;
    alunosUMap["Maria"] = 9.0;
    alunosUMap["João"] = 6.5;
    
    for (auto aluno: alunosMap) {
        cout << "Aluno usando map: " << aluno.first << " - Nota: " << aluno.second << endl;
    }
    
    cout << endl;
    
    for (auto aluno: alunosUMap) {
        cout << "Aluno usando unordered_map: " << aluno.first << " - Nota: " << aluno.second << endl;
    }
    
    return 0;
}

// a diferenca foi que o MAP deixa a saida de modo ordenado, ja o unordered_map deixa desordenado
// Vale a pena usar map quando preciso manter os dados ordenados,
// mesmo aceitando o custo O(log n) das operações.
