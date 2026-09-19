#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {
    unordered_map<string, double> alunos = {
        {"Ana", 9.0},
        {"Bruno", 7.5},
        {"Carlos", 8.5},
        {"Daniela", 6.5},
        {"Eduardo", 8.0}
    };

    unordered_set<string> entregaram = {
        "Ana",
        "Carlos",
        "Eduardo"
    };

    unordered_multimap<string, string> disciplinas;

    disciplinas.insert({"Ana", "Matematica"});
    disciplinas.insert({"Ana", "Programacao"});

    disciplinas.insert({"Bruno", "Historia"});
    disciplinas.insert({"Bruno", "Matematica"});

    disciplinas.insert({"Carlos", "Programacao"});
    disciplinas.insert({"Carlos", "Banco de Dados"});

    disciplinas.insert({"Daniela", "Historia"});
    disciplinas.insert({"Daniela", "Portugues"});

    disciplinas.insert({"Eduardo", "Programacao"});
    disciplinas.insert({"Eduardo", "Matematica"});

    for (auto& aluno : alunos) {
        string nome = aluno.first;

        cout << "Aluno: " << nome << endl;
        cout << "Nota: " << aluno.second << endl;

        if (entregaram.count(nome)) {
            cout << "Trabalho: Entregou" << endl;
        } else {
            cout << "Trabalho: Nao entregou" << endl;
        }

        cout << "Disciplinas:" << endl;

        auto intervalo = disciplinas.equal_range(nome);

        for (auto it = intervalo.first; it != intervalo.second; ++it) {
            cout << "- " << it->second << endl;
        }

        cout << endl;
    }

    return 0;
}
