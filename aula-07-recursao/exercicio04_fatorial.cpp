// ============================================================
// Exercicio 04 - Fatorial
// ============================================================
// Escreva uma funcao recursiva que devolva o fatorial de n.
//
// fatorial(5)  ->  120
//
// Lembre que o fatorial de 0 e 1.
// ============================================================

#include <iostream>

using namespace std;

int fatorial(int n) {

    // caso base
    if (n == 0 || n == 1) {
        return 1;
    }

    // caso recursivo
    return n * fatorial(n - 1);
}

int main(void) {

    cout << fatorial(5) << endl;

    return 0;
}
