#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    map<string, double> alunos;

    alunos["Carlos"] = 8.5;
    alunos["Ana"] = 9.0;
    alunos["Bruno"] = 7.5;
    alunos["Daniela"] = 8.0;
    alunos["Eduardo"] = 6.5;

    cout << "map:" << endl;

    for (auto& aluno : alunos) {
        cout << aluno.first << " - " << aluno.second << endl;
    }

    unordered_map<string, double> alunosUnordered;

    alunosUnordered["Carlos"] = 8.5;
    alunosUnordered["Ana"] = 9.0;
    alunosUnordered["Bruno"] = 7.5;
    alunosUnordered["Daniela"] = 8.0;
    alunosUnordered["Eduardo"] = 6.5;

    cout << endl << "unordered_map:" << endl;

    for (auto& aluno : alunosUnordered) {
        cout << aluno.first << " - " << aluno.second << endl;
    }

    return 0;
}
