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
    // 1. Use unordered_map para cadastrar 5 alunos com suas notas finais.
    unordered_map<string, double> notasFinais = {
        {"Ana", 9.0},
        {"Bruno", 7.5},
        {"Carlos", 8.0},
        {"Daniela", 9.5},
        {"Eduardo", 6.5}
    };

    // 2. Use unordered_set para registrar quais alunos entregaram o trabalho.
    unordered_set<string> entregasTrabalho = {"Ana", "Carlos", "Daniela"};

    // 3. Use unordered_multimap para registrar as disciplinas de cada aluno.
    unordered_multimap<string, string> disciplinasAlunos = {
        {"Ana", "Matematica"},
        {"Ana", "Fisica"},
        {"Bruno", "Matematica"},
        {"Carlos", "Quimica"},
        {"Carlos", "Fisica"},
        {"Daniela", "Matematica"},
        {"Eduardo", "Quimica"}
    };

    // 4. Percorra os alunos e, para cada um, exiba a nota, se entregou o trabalho e as disciplinas dele.
    for (auto& par : notasFinais) {
        string nome = par.first;
        double nota = par.second;

        cout << "Aluno: " << nome << endl;
        cout << " - Nota final: " << nota << endl;

        bool entregou = (entregasTrabalho.count(nome) > 0);
        cout << " - Entregou o trabalho? " << (entregou ? "Sim" : "Nao") << endl;

        cout << " - Disciplinas: ";
        auto range = disciplinasAlunos.equal_range(nome);
        for (auto it = range.first; it != range.second; ++it) {
            cout << it->second << " ";
        }
        cout << "\n-------------------------" << endl;
    }

    // 5. Escreva em um comentario por que cada biblioteca foi a escolha certa para o seu papel.
    // - unordered_map: Perfeito para associar uma chave unica (nome do aluno) a um unico valor (nota final), garantindo acesso e busca O(1).
    // - unordered_set: Ideal para registrar a presenca ou participacao (quem entregou o trabalho) de forma rapida e sem necessidade de valores duplicados.
    // - unordered_multimap: Essencial para permitir que uma unica chave (nome do aluno) seja associada a multiplos valores (varias disciplinas cursadas).

    return 0;
}