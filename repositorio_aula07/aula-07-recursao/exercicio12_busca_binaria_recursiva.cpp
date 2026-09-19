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

    return -1;
}

int main() {
    int itens[7] = {10, 20, 30, 40, 50, 60, 70};
    cout << buscaBinaria(itens, 0, 6, 60) << " ";
    cout << buscaBinaria(itens, 0, 6, 25) << endl;
    return 0;
}
