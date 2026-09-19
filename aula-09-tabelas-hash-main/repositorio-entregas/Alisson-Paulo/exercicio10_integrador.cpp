#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {
    unordered_map<string, double> notas;
    notas["Ana"] = 9.0;
    notas["Bruno"] = 7.5;
    notas["Carla"] = 8.0;
    notas["Diego"] = 6.5;
    notas["Esther"] = 9.5;

    unordered_set<string> entregou = {"Ana", "Carla", "Esther"};

    unordered_multimap<string, string> disciplinas;
    disciplinas.insert({"Ana", "Matematica"});
    disciplinas.insert({"Ana", "Fisica"});
    disciplinas.insert({"Bruno", "Historia"});
    disciplinas.insert({"Carla", "Quimica"});
    disciplinas.insert({"Carla", "Biologia"});
    disciplinas.insert({"Diego", "Geografia"});
    disciplinas.insert({"Esther", "Matematica"});

    for (auto& par : notas) {
        string aluno = par.first;
        double nota = par.second;

        cout << aluno << ":" << endl;
        cout << "  Nota: " << nota << endl;
        cout << "  Entregou o trabalho? " << (entregou.count(aluno) ? "Sim" : "Nao") << endl;

        cout << "  Disciplinas:";
        auto intervalo = disciplinas.equal_range(aluno);
        for (auto it = intervalo.first; it != intervalo.second; ++it) {
            cout << " " << it->second;
        }
        cout << endl;
    }

    return 0;
}
