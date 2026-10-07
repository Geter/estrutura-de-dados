// ============================================================
// Exercicio 02 - Contagem crescente
// ============================================================
// Escreva uma funcao recursiva que imprima de 1 ate n.
//
// contagemCrescente(5)  ->  1 2 3 4 5
//
// Compare com o exercicio 01. O codigo e quase o mesmo.
// ============================================================

#include <iostream>

using namespace std;

void contagemCrescente(int n) {

    // caso base
    if (n == 0) {
        return;
    }

    // chamada recursiva
    contagemCrescente(n - 1);

    // imprime o valor atual
    cout << n << " ";
}

int main(void) {

    contagemCrescente(5);

    cout << endl;

    return 0;
}
