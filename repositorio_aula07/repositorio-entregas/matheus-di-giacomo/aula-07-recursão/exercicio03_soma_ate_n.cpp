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
    if (n <= 0) {
        return 0;
    }

    return n + somaAte(n - 1);
}

int main() {
    cout << somaAte(5) << endl;
    return 0;
}