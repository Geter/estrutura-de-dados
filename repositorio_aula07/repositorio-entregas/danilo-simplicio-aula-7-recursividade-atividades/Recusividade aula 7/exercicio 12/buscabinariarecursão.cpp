#include <iostream>
using namespace std;

int buscaBinaria(int itens[], int inicio, int fim, int procurado) {

    // caso base
    if (inicio > fim) {
        return -1;
    }

    // encontra o meio
    int meio = (inicio + fim) / 2;

    // encontrou o valor
    if (itens[meio] == procurado) {
        return meio;
    }

    // procura na metade esquerda
    if (procurado < itens[meio]) {
        return buscaBinaria(itens, inicio, meio - 1, procurado);
    }

    // procura na metade direita
    return buscaBinaria(itens, meio + 1, fim, procurado);
}

int main() {
    int itens[7] = {10, 20, 30, 40, 50, 60, 70};

    cout << buscaBinaria(itens, 0, 6, 60) << " ";
    cout << buscaBinaria(itens, 0, 6, 25) << endl;

    return 0;
}
