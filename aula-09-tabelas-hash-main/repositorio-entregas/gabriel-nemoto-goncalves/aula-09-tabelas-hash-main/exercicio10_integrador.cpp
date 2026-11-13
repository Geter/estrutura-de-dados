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
#include <unordered_set>
using namespace std;

int main() {

    unordered_map<string, double> alunos;

    alunos["Gabriel"] = 9.0;
    alunos["Ana"] = 8.5;
    alunos["Carlos"] = 7.0;
    alunos["Maria"] = 9.5;
    alunos["Joao"] = 6.5;

    unordered_set<string> entregaram;

    entregaram.insert("Gabriel");
    entregaram.insert("Ana");
    entregaram.insert("Maria");

    unordered_multimap<string, string> disciplinas;

    disciplinas.insert({"Gabriel", "Programacao"});
    disciplinas.insert({"Gabriel", "Banco de Dados"});
    disciplinas.insert({"Ana", "Programacao"});
    disciplinas.insert({"Ana", "Matematica"});
    disciplinas.insert({"Carlos", "Banco de Dados"});
    disciplinas.insert({"Carlos", "Estrutura de Dados"});
    disciplinas.insert({"Maria", "Programacao"});
    disciplinas.insert({"Maria", "Matematica"});
    disciplinas.insert({"Joao", "Estrutura de Dados"});

    for (const auto& aluno : alunos) {

        cout << "\nAluno: " << aluno.first << endl;
        cout << "Nota: " << aluno.second << endl;

        if (entregaram.find(aluno.first) != entregaram.end()) {
            cout << "Trabalho: Entregou" << endl;
        } else {
            cout << "Trabalho: Nao entregou" << endl;
        }

        cout << "Disciplinas: ";

        auto faixa = disciplinas.equal_range(aluno.first);

        for (auto it = faixa.first; it != faixa.second; ++it) {
            cout << it->second << " ";
        }

        cout << endl;
    }

    return 0;
}

// unordered_map foi escolhido para relacionar cada aluno com sua nota,
// permitindo buscar rapidamente a nota usando o nome do aluno.

// unordered_set foi escolhido para registrar quem entregou o trabalho,
// pois nao precisamos armazenar valores associados e nao queremos nomes repetidos.

// unordered_multimap foi escolhido para relacionar cada aluno com varias disciplinas,
// pois permite que a mesma chave tenha varios valores.