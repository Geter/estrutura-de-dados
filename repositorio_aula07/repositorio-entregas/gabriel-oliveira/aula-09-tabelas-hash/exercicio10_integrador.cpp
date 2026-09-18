// ============================================================
// Exercicio 10 - Integrador
// ============================================================
// Um programa que usa varias bibliotecas ao mesmo tempo, cada
// uma para o que ela faz melhor.
//
// O que voce deve fazer:
//   1. Use unordered_map para cadastrar 5 alunos com suas notas
//      finais.
//   2. Use unordered_set para registrar quais alunos entregaram
//      o trabalho.
//   3. Use unordered_multimap para registrar as disciplinas de
//      cada aluno.
//   4. Percorra os alunos e, para cada um, exiba a nota, se
//      entregou o trabalho e as disciplinas dele.
//   5. Escreva em um comentario por que cada biblioteca foi a
//      escolha certa para o seu papel.
// ============================================================

#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {

    unordered_map<string, float> notas = {
        {"Gabriel", 8.5},
        {"Lucas", 7.0},
        {"Mariana", 9.0},
        {"Rafael", 6.5},
        {"Beatriz", 8.0}
    };

    unordered_set<string> entregaram = {
        "Gabriel",
        "Mariana",
        "Beatriz"
    };

    unordered_multimap<string, string> disciplinas;

    disciplinas.insert({"Gabriel", "POO"});
    disciplinas.insert({"Gabriel", "Banco de Dados"});

    disciplinas.insert({"Lucas", "Desenvolvimento Web"});
    disciplinas.insert({"Lucas", "POO"});

    disciplinas.insert({"Mariana", "Estrutura de Dados"});
    disciplinas.insert({"Mariana", "Banco de Dados"});

    disciplinas.insert({"Rafael", "Desenvolvimento Web"});

    disciplinas.insert({"Beatriz", "POO"});
    disciplinas.insert({"Beatriz", "Estrutura de Dados"});

    for (auto aluno : notas) {

        cout << "Aluno: " << aluno.first << endl;
        cout << "Nota: " << aluno.second << endl;

        if (entregaram.count(aluno.first) > 0) {
            cout << "Trabalho: entregue" << endl;
        } else {
            cout << "Trabalho: nao entregue" << endl;
        }

        cout << "Disciplinas: ";

        auto intervalo = disciplinas.equal_range(aluno.first);

        for (auto it = intervalo.first; it != intervalo.second; it++) {
            cout << it->second << " ";
        }

        cout << endl << endl;
    }

    // unordered_map: relaciona cada aluno com uma unica nota.
    // unordered_set: guarda apenas quem entregou o trabalho.
    // unordered_multimap: permite varias disciplinas para o mesmo aluno.

    return 0;
}