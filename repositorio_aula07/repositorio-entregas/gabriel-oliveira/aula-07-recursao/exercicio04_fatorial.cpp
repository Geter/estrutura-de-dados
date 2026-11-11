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

    // defina o caso base
    if(n == 0){
        return 1;
    }
    // devolva o valor atual combinado com a chamada recursiva
    return n * fatorial(n - 1);
}

int main() {
    cout << fatorial(5) << endl;
    return 0;
}
