#include <iostream>
#include <utility>
using namespace std;

void mostrar(int itens[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        cout << itens[i] << " ";
    }
    cout << endl;
}

int particionar(int itens[], int inicio, int fim) {
    int pivo = itens[fim];
    int limite = inicio - 1;

    for (int i = inicio; i < fim; i++) {
        if (itens[i] <= pivo) {
            limite = limite + 1;
            swap(itens[limite], itens[i]);
        }
    }

    swap(itens[limite + 1], itens[fim]);

    return limite + 1;
}

void quickSort(int itens[], int inicio, int fim) {
    if (inicio >= fim) {
        return;
    }

    int posicaoPivo = particionar(itens, inicio, fim);

    quickSort(itens, inicio, posicaoPivo - 1);
    quickSort(itens, posicaoPivo + 1, fim);
}

int main() {
    int itens[6] = {38, 27, 43, 9, 82, 10};

    quickSort(itens, 0, 5);

    mostrar(itens, 6);

    return 0;
}
