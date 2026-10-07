	// ============================================================
// Exercicio 08 - Contar ocorrencias
// ============================================================
// Escreva uma funcao recursiva que conte quantas vezes um
// valor aparece em um vetor.
//
// itens = {3, 7, 3, 1, 3, 9, 7, 3}
// contarOcorrencias(itens, 8, 3)  ->  4
//
// Toda recursao precisa de um caso base e de uma chamada que
// reduza o problema.
// ============================================================

#include <iostream>

using namespace std;

int contarOcorrencias(int itens[], int quantidade, int procurado) {

    // caso base
    if (quantidade == 0) {
        return 0;
    }

    // verifica o ultimo elemento valido
    if (itens[quantidade - 1] == procurado) {
        return 1 + contarOcorrencias(itens, quantidade - 1, procurado);
    }

    return contarOcorrencias(itens, quantidade - 1, procurado);
}

int main(void) {

    int itens[8] = {3, 7, 3, 1, 3, 9, 7, 3};

    cout << contarOcorrencias(itens, 8, 3) << endl;

    return 0;
}
