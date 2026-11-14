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

    if (quantidade == 0) {
        return 0;
    }

    int encontrou = (itens[0] == procurado) ? 1 : 0;

    // soma o resultado com as ocorrências do restante
    return encontrou + contarOcorrencias(itens + 1, quantidade - 1, procurado);
}

int main() {
    int itens[8] = {3, 7, 3, 1, 3, 9, 7, 3};

    cout << contarOcorrencias(itens, 8, 3) << endl;

    return 0;
}
