// ============================================================
// Exercicio 03 - Soma de 1 ate n
// ============================================================
// Escreva uma funcao recursiva que devolva a soma de 1 ate n.
//
// somaAte(5)  ->  15
// ============================================================

#include <iostream>

using namespace std;

int somaAte(int n) {

    // caso base
    if (n == 1) {
        return 1;
    }

    // caso recursivo
    return n + somaAte(n - 1);
}

int main(void) {

    cout << somaAte(5) << endl;

    return 0;
}
