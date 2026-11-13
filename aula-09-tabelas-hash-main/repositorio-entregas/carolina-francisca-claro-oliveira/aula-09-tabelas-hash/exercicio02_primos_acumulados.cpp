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

    for (int i = 0; i < (int)texto.size(); i++) {
			acumulado = acumulado * primo(texto[i]);
    }
    return acumulado % 10;
}

int main(void) {
    string tamanhos[4] = {"A", "AA", "AAA", "AAAA"};

    for (string tamanho : tamanhos) {
        cout << tamanho << " " << hashAcumulado(tamanho) << endl;
    }     // Nao houve colisoes neste conjunto.
    
    return 0;
}
