// ============================================================
// Exercicio 13 - Maximo divisor comum
// ============================================================
// O algoritmo de Euclides diz que o maximo divisor comum entre
// a e b e igual ao maximo divisor comum entre b e o resto da
// divisao de a por b.
//
// Quando b chega a zero, o resultado e a.
//
// Escreva a funcao de forma recursiva.
//
// mdc(48, 18)  ->  6
// ============================================================

#include <iostream>

using namespace std;

int mdc(int a, int b) {

    // caso base
    if (b == 0) {
        return a;
    }

    // caso recursivo
    return mdc(b, a % b);
}

int main(void) {

    cout << mdc(48, 18) << endl;

    return 0;
}
