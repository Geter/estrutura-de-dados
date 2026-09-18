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

    // defina o caso base e o valor que ele devolve
    if(n == 0){
        return 0;
    }
    // devolva o valor atual combinado com a chamada recursiva
    return n + somaAte(n - 1);
    return 0;
}

int main() {
    cout << somaAte(5) << endl;
    return 0;
}
