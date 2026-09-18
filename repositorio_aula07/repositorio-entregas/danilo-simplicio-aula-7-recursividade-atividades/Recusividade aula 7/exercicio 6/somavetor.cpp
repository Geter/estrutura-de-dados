#include <iostream>
using namespace std;

int somaVetor(int itens[], int quantidade) {

    // caso base
    if (quantidade == 0) {
        return 0;
    }

    // elemento atual + restante do vetor
    return itens[quantidade - 1] + somaVetor(itens, quantidade - 1);
}

int main() {
    int itens[6] = {4, 8, 15, 16, 23, 42};

    cout << somaVetor(itens, 6) << endl;

    return 0;
}
