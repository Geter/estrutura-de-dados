#include <iostream>
using namespace std;

void mostrar(int itens[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        cout << itens[i] << " ";
    }
    cout << endl;
}

void merge(int itens[], int inicio, int meio, int fim) {

    int auxiliar[100];
    int esquerda = inicio;
    int direita = meio + 1;
    int posicao = inicio;

    while (esquerda <= meio && direita <= fim) {
        if (itens[esquerda] <= itens[direita]) {
            auxiliar[posicao] = itens[esquerda];
            esquerda = esquerda + 1;
        } else {
            auxiliar[posicao] = itens[direita];
            direita = direita + 1;
        }
        posicao = posicao + 1;
    }

    while (esquerda <= meio) {
        auxiliar[posicao] = itens[esquerda];
        esquerda = esquerda + 1;
        posicao = posicao + 1;
    }

    while (direita <= fim) {
        auxiliar[posicao] = itens[direita];
        direita = direita + 1;
        posicao = posicao + 1;
    }

    for (int i = inicio; i <= fim; i++) {
        itens[i] = auxiliar[i];
    }
}

void mergeSort(int itens[], int inicio, int fim) {
    if (inicio >= fim) {
        return;
    }

    int meio = (inicio + fim) / 2;

    mergeSort(itens, inicio, meio);
    mergeSort(itens, meio + 1, fim);

    merge(itens, inicio, meio, fim);
}

int main() {
    int itens[6] = {38, 27, 43, 9, 82, 10};

    mergeSort(itens, 0, 5);

    mostrar(itens, 6);

    return 0;
}
