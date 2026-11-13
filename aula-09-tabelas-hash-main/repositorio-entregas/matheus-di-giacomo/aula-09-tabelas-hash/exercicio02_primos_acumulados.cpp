// ============================================================
// Exercicio 02 - Tamanhos de baterias com primos acumulados
// ============================================================
// Em vez de SOMAR os primos, esta funcao MULTIPLICA, acumulando
// o resultado a cada letra.
//
// Exemplo:  "AA" -> comeca em 1, x2 = 2, x2 = 4  ->  4 % 10 = 4
//
// O conjunto A, AA, AAA, AAAA e um desafio porque todas as
// letras sao iguais.
//
// O que voce deve fazer:
//   1. Implemente a funcao hashAcumulado.
//   2. Calcule o indice de A, AA, AAA e AAAA.
//   3. Imprima cada tamanho com o indice recebido.
//   4. Houve colisoes? Registre a sua resposta em um comentario.
//   5. Qual das funcoes A, B, C ou D vistas em aula teria mais
//      dificuldade com esse conjunto? Por que?
//
// Saida esperada:
// A 2
// AA 4
// AAA 8
// AAAA 6
// ============================================================

#include <iostream>
#include <string>
#include "primos.h"
using namespace std;

int hashAcumulado(string texto) {
    int acumulado = 1;
    for (char c : texto) {
        acumulado = acumulado * primo(c);
    }

    return acumulado % 10;
}

int main() {
    string tamanhos[4] = {"A", "AA", "AAA", "AAAA"};

    for (string tamanho : tamanhos) {
        cout << tamanho << " " << hashAcumulado(tamanho) << endl;
    }

    // 4. Houve colisoes? Nao, os indices gerados foram 2, 4, 8 e 6 (todos diferentes).
    // 5. Funcoes que usam apenas soma simples ou operacoes comutativas sem considerar a posicao ou a quantidade exata teriam mais dificuldade, pois a acumulacao multiplicativa consegue diferenciar sequencias de tamanhos diferentes mesmo com caracteres repetidos.

    return 0;
}