// ============================================================
// Exercicio 01 - Contagem regressiva
// ============================================================
// Escreva uma funcao recursiva que imprima de n ate 1.
//
// contagemRegressiva(5)  ->  5 4 3 2 1
// ============================================================

#include <iostream>
using namespace std;

void contagemRegressiva(int n) {

    // defina o caso base, que encerra a recursao
    if(n == 0){
        return;
    }
    // imprima o valor atual
    cout << n << " ";

    // faca a chamada recursiva, reduzindo o problema
    contagemRegressiva(n - 1);

}

int main() {
    contagemRegressiva(5);

    cout << endl;
    return 0;
}
