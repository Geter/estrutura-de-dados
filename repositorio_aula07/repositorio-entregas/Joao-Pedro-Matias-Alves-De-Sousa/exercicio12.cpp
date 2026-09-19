#include <iostream>
using namespace std;

int buscaBinaria(int itens[], int inicio, int fim, int procurado) {

    if (inicio > fim) {
        return -1;
    }

    int meio = (inicio + fim) / 2;

    if (itens[meio] == procurado) {
        return meio;
    }

    if (procurado < itens[meio]) {
        return buscaBinaria(itens, inicio, meio - 1, procurado);
    }

    return buscaBinaria(itens, meio + 1, fim, procurado);
}

int main() {
    int itens[7] = {10, 20, 30, 40, 50, 60, 70};

    cout << buscaBinaria(itens, 0, 6, 60) << " ";
    cout << buscaBinaria(itens, 0, 6, 25) << endl;

    return 0;
}
