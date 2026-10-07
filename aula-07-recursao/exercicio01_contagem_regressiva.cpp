// ============================================================
// Exercicio 01 - Contagem regressiva
// ============================================================
// Escreva uma funcao recursiva que imprima de n ate 1.
//
// contagemRegressiva(5)  ->  5 4 3 2 1
// ============================================================

#include <iostream>

using namespace std;

void contagemRegressiva(int n) {

    // caso base
    if (n == 0) {
        return;
    }

    // imprime o valor atual
    cout << n << " ";

    // chamada recursiva
    contagemRegressiva(n - 1);
}

int main(void) {

    contagemRegressiva(5);

    return 0;
}
