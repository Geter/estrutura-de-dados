// ============================================================
// Exercicio 12 - Busca binaria recursiva
// ============================================================
// Reescreva a busca binaria do encontro anterior de forma
// recursiva, sem usar while.
//
// A funcao devolve a posicao do valor procurado, ou menos um
// quando ele nao esta no vetor.
//
// itens = {10, 20, 30, 40, 50, 60, 70}
// buscaBinaria(itens, 0, 6, 60)  ->  5
// buscaBinaria(itens, 0, 6, 25)  ->  -1
// ============================================================

#include <iostream>

using namespace std;

int buscaBinaria(int itens[], int inicio, int fim, int procurado) {

    // caso base: valor nao encontrado
    if (inicio > fim) {
        return -1;
    }

    int meio = (inicio + fim) / 2;

    // encontrou
    if (itens[meio] == procurado) {
        return meio;
    }

    // procurar na metade esquerda
    if (procurado < itens[meio]) {
        return buscaBinaria(itens, inicio, meio - 1, procurado);
    }

    // procurar na metade direita
    return buscaBinaria(itens, meio + 1, fim, procurado);
}

int main(void) {

    int itens[7] = {10, 20, 30, 40, 50, 60, 70};

    cout << buscaBinaria(itens, 0, 6, 60) << " ";
    cout << buscaBinaria(itens, 0, 6, 25) << endl;

    return 0;
}
