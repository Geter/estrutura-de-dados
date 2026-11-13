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

    // 1. Alunos e notas finais
    unordered_map<string, double> notas;

    notas["Ana"] = 8.5;
    notas["Bruno"] = 7.0;
    notas["Carla"] = 9.2;
    notas["Daniel"] = 6.5;
    notas["Elias"] = 8.0;


    // 2. Alunos que entregaram o trabalho
    unordered_set<string> entregaram;

    entregaram.insert("Ana");
    entregaram.insert("Carla");
    entregaram.insert("Elias");


    // 3. Disciplinas de cada aluno
    unordered_multimap<string, string> disciplinas;

    disciplinas.insert({"Ana", "Estrutura de Dados"});
    disciplinas.insert({"Ana", "Banco de Dados"});

    disciplinas.insert({"Bruno", "Estrutura de Dados"});
    disciplinas.insert({"Bruno", "Programacao Web"});

    disciplinas.insert({"Carla", "Banco de Dados"});
    disciplinas.insert({"Carla", "Programacao Web"});

    disciplinas.insert({"Daniel", "Estrutura de Dados"});
    disciplinas.insert({"Daniel", "Banco de Dados"});

    disciplinas.insert({"Elias", "Estrutura de Dados"});
    disciplinas.insert({"Elias", "Programacao Web"});    


    // 4. Percorrendo todos os alunos
    for (auto& aluno : notas) {

        string nome = aluno.first;
        double nota = aluno.second;

        cout << "Aluno: " << nome << endl;
        cout << "Nota final: " << nota << endl;


        // Verificando se entregou o trabalho
        if (entregaram.count(nome) == 1) {
            cout << "Trabalho: entregue" << endl;
        } else {
            cout << "Trabalho: nao entregue" << endl;
        }


        // Buscando todas as disciplinas do aluno
        cout << "Disciplinas:" << endl;

        auto faixa = disciplinas.equal_range(nome);

        for (auto it = faixa.first; it != faixa.second; it++) {
            cout << "- " << it->second << endl;
        }

        cout << endl;
    }


    /*
    unordered_map foi usado para guardar aluno e nota,
    pois cada aluno possui uma unica nota final.

    unordered_set foi usado para registrar os alunos que
    entregaram o trabalho, pois precisamos apenas saber
    se o nome existe ou nao no conjunto.

    unordered_multimap foi usado para as disciplinas,
    pois o mesmo aluno pode estar associado a varias disciplinas.
    */

    return 0;
}
