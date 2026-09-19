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

    if (n == 0) {
        return;
    }

    contagemCrescente(n - 1);

    cout << n << " ";
}

int main() {
    contagemCrescente(5);
    cout << endl;
    return 0;
}
