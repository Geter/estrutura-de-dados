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
    unordered_map<string, double> alunos = {
        {"Ana", 8.5},
        {"Bruno", 7.0},
        {"Carlos", 9.0},
        {"Daniela", 6.5},
        {"Fernanda", 9.5}
    };

    unordered_set<string> entregaram = {
        "Ana",
        "Carlos",
        "Fernanda"
    };

    unordered_multimap<string, string> disciplinas;

    disciplinas.insert({"Ana", "Algoritmos"});
    disciplinas.insert({"Ana", "Banco de Dados"});
    disciplinas.insert({"Bruno", "Algoritmos"});
    disciplinas.insert({"Carlos", "Banco de Dados"});
    disciplinas.insert({"Carlos", "Estrutura de Dados"});
    disciplinas.insert({"Daniela", "Algoritmos"});
    disciplinas.insert({"Fernanda", "Banco de Dados"});
    disciplinas.insert({"Fernanda", "Estrutura de Dados"});

    for (auto& aluno : alunos) {
        cout << "\nAluno: " << aluno.first << endl;
        cout << "Nota: " << aluno.second << endl;

        if (entregaram.count(aluno.first)) {
            cout << "Trabalho: entregue" << endl;
        } else {
            cout << "Trabalho: nao entregue" << endl;
        }

        cout << "Disciplinas: ";

        auto intervalo = disciplinas.equal_range(aluno.first);

        for (auto it = intervalo.first; it != intervalo.second; ++it) {
            cout << it->second << " ";
        }

        cout << endl;
    }

    // unordered_map foi usado para as notas porque cada aluno possui
    // uma unica nota e a busca pela chave e eficiente em media.
    // unordered_set serve para verificar rapidamente quem entregou.
    // unordered_multimap permite que um mesmo aluno tenha varias disciplinas.

    return 0;
}
