#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    map<string, int> alunos;
    alunos["Pedro"] = 7;
    alunos["Ana"] = 9;
    alunos["Lucas"] = 6;
    alunos["Beatriz"] = 8;
    alunos["Carlos"] = 7;

    cout << "map:" << endl;
    for (const auto& aluno : alunos) {
        cout << aluno.first << ": " << aluno.second << endl;
    }

    unordered_map<string, int> outrosAlunos;
    outrosAlunos["Pedro"] = 7;
    outrosAlunos["Ana"] = 9;
    outrosAlunos["Lucas"] = 6;
    outrosAlunos["Beatriz"] = 8;
    outrosAlunos["Carlos"] = 7;

    cout << "\nunordered_map:" << endl;
    for (const auto& aluno : outrosAlunos) {
        cout << aluno.first << ": " << aluno.second << endl;
    }

    // 4. Diferenca:
    // O map exibe os alunos em ordem crescente pela chave (nome):
    // Ana, Beatriz, Carlos, Lucas e Pedro.
    // O unordered_map nao garante uma ordem de exibicao,
    // nem mesmo a ordem em que os alunos foram inseridos.

    // 5. Quando vale a pena aceitar O(log n)?
    // Quando precisamos manter os dados ordenados pela chave,
    // como em uma lista de alunos exibida em ordem alfabetica.

    return 0;
}
