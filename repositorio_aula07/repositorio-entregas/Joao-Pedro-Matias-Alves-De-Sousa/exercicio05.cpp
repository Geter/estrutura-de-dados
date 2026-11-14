// ============================================================
// Exercicio 05 - Potencia
// ============================================================
// Escreva uma funcao recursiva que devolva base elevado a
// expoente, sem usar a funcao pow.
//
// potencia(2, 8)  ->  256
//
// Lembre que qualquer numero elevado a 0 e 1.
// ============================================================
#include <iostream>
using namespace std;

int potencia(int base, int expoente) {

    if (expoente == 0) {
        return 1;
    }

    return base * potencia(base, expoente - 1);
}

int main() {
    cout << potencia(2, 8) << endl;
    return 0;
}
