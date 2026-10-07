// ============================================================
// Exercicio 07 - Maior elemento de um vetor
// ============================================================
// Escreva uma funcao recursiva que devolva o maior valor de um
// vetor.
//
// itens = {4, 8, 15, 16, 23, 42}
// maiorDe(itens, 6)  ->  42
//
// A funcao max, do cabecalho <algorithm>, devolve o maior entre
// dois valores:  max(10, 25) devolve 25.
// ============================================================

#include <iostream>
#include <algorithm>

using namespace std;

int maiorDe(int itens[], int quantidade) {

    // caso base
    if (quantidade == 1) {
        return itens[0];
    }

    // caso recursivo
    return max(itens[quantidade - 1],
               maiorDe(itens, quantidade - 1));
}

int main(void) {

    int itens[6] = {4, 8, 15, 16, 23, 42};

    cout << maiorDe(itens, 6) << endl;

    return 0;
}
