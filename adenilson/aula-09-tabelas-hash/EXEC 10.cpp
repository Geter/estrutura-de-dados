#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {
    // Guarda uma nota para cada aluno.
    unordered_map<string, int> alunos;
    alunos["Ana"] = 9;
    alunos["Beatriz"] = 8;
    alunos["Carlos"] = 7;
    alunos["Lucas"] = 6;
    alunos["Pedro"] = 7;

    // Guarda quem entregou, sem repetir nomes.
    unordered_set<string> entregaram = {"Ana", "Carlos", "Pedro"};

    // Permite guardar mais de uma disciplina para o mesmo aluno.
    unordered_multimap<string, string> disciplinas;
    disciplinas.insert({"Ana", "Matematica"});
    disciplinas.insert({"Ana", "Portugues"});
    disciplinas.insert({"Beatriz", "Historia"});
    disciplinas.insert({"Carlos", "Matematica"});
    disciplinas.insert({"Lucas", "Portugues"});
    disciplinas.insert({"Pedro", "Historia"});
    disciplinas.insert({"Pedro", "Matematica"});

    for (auto aluno : alunos) {
        cout << "Aluno: " << aluno.first << endl;
        cout << "Nota: " << aluno.second << endl;

        if (entregaram.count(aluno.first) > 0) {
            cout << "Entregou o trabalho: sim" << endl;
        } else {
            cout << "Entregou o trabalho: nao" << endl;
        }

        cout << "Disciplinas:" << endl;
        for (auto disciplina : disciplinas) {
            if (disciplina.first == aluno.first) {
                cout << disciplina.second << endl;
            }
        }
        cout << endl;
    }

    return 0;
}
