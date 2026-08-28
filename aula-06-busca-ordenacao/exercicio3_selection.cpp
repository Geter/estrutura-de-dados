// ============================================================
// Exercicio 3 - Selection Sort
// Estrutura de Dados - IFSP Campus Campos do Jordao
// ============================================================
//
// Procura o menor valor do trecho ainda nao ordenado e o troca
// com a primeira posicao desse trecho.
//
// A busca do menor ja esta escrita. Falta a troca.
//
// Saida esperada:
// 10 20 30 40 50 60
//
// ============================================================

#include <iostream>
#include <utility>
using namespace std;

void mostrar(int itens[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        cout << itens[i] << " ";
    }
    cout << endl;
}

void selectionSort(int itens[], int quantidade) {

    for (int i = 0; i < quantidade - 1; i++) {

        // Guarda a posicao do menor valor encontrado.
        // Comeca supondo que o menor e o proprio i.
        int menor = i;

        // Percorre o trecho a frente de i procurando um valor
        // menor. Quando encontra, guarda a POSICAO dele.
        for (int j = i + 1; j < quantidade; j++) {
            if (itens[j] < itens[menor]) {
                menor = j;
            }
        }

        // ----------------------------------------------------
        // PASSO 1
        // Neste ponto, menor guarda a posicao do menor valor do
        // trecho. Troque itens[i] com itens[menor] usando swap.
        // ----------------------------------------------------

        // escreva aqui

    }
}

int main() {

    int itens[6] = {40, 10, 50, 20, 60, 30};

    // --------------------------------------------------------
    // PASSO 2
    // Chame selectionSort e depois mostrar.
    // --------------------------------------------------------

    // escreva aqui


    return 0;
}
