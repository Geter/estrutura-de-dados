// ============================================================
// Exercicio 06 - Soma dos elementos de um vetor
// ============================================================
// Escreva uma funcao recursiva que devolva a soma dos
// elementos de um vetor.
//
// itens = {4, 8, 15, 16, 23, 42}
// somaVetor(itens, 6)  ->  108
//
// Toda recursao precisa de um caso base e de uma chamada que
// reduza o problema.
// ============================================================

#include <iostream>

using namespace std;

int somaVetor(int itens[], int quantidade) {

    // caso base
    if (quantidade == 0) {
        return 0;
    }

    // caso recursivo
    return itens[quantidade - 1] + somaVetor(itens, quantidade - 1);
}

int main(void) {

    int itens[6] = {4, 8, 15, 16, 23, 42};

    cout << somaVetor(itens, 6) << endl;

    return 0;
}
