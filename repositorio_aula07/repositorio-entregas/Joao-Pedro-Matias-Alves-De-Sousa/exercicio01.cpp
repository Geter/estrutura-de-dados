// ============================================================
// Exercicio 01 - Contagem regressiva
// ============================================================
// Escreva uma funcao recursiva que imprima de n ate 1.
//
// contagemRegressiva(5)  ->  5 4 3 2 1
// ============================================================#
#include <iostream>
using namespace std;

void contagemRegressiva(int n) {

    if (n == 0) {
        return;
    }

    cout << n << " ";

    contagemRegressiva(n - 1);
    cout << n << " ";
}

int main() {

    contagemRegressiva(5);

    return 0;
}
