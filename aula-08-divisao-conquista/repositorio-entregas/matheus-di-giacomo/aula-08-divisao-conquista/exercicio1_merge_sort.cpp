// ============================================================
// Exercicio 1 - Merge Sort
// ============================================================
// A funcao merge ja esta pronta abaixo. Ela recebe um trecho do
// vetor dividido em duas metades JA ORDENADAS, delimitadas por
// inicio, meio e fim, e intercala as duas em ordem.
//
// O merge nao ordena nada sozinho. Ele apenas junta duas partes
// que ja estavam ordenadas.
//
// Escreva a funcao mergeSort.
//
// int itens[6] = {38, 27, 43, 9, 82, 10};
// mergeSort(itens, 0, 5);
//
// Saida esperada:
// 9 10 27 38 43 82
// ============================================================

#include <iostream>
using namespace std;

void mostrar(int itens[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        cout << itens[i] << " ";
    }
    cout << endl;
}

// ------------------------------------------------------------
// PRONTA: intercala itens[inicio..meio] com itens[meio+1..fim]
// ------------------------------------------------------------
void merge(int itens[], int inicio, int meio, int fim) {

    int auxiliar[100];
    int esquerda = inicio;      // caminha na primeira metade
    int direita = meio + 1;     // caminha na segunda metade
    int posicao = inicio;       // caminha no vetor auxiliar

    // enquanto houver elemento nas duas metades, sai o menor
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

    // uma das metades acabou, o que sobrou na outra vai direto
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

    // devolve o trecho intercalado para o vetor original
    for (int i = inicio; i <= fim; i++) {
        itens[i] = auxiliar[i];
    }
}

// ------------------------------------------------------------
// Escreva a funcao mergeSort.
//
// Ela ordena o trecho itens[inicio..fim].
// ------------------------------------------------------------
void mergeSort(int itens[], int inicio, int fim) {

    // 1. Caso base: se o trecho tem um elemento ou menos,
    //    ja esta ordenado. Encerre a funcao aqui.

    // 2. Calcule a posicao do meio do trecho, entre inicio e fim.

    // 3. Chame mergeSort para o trecho da esquerda,
    //    que vai de inicio ate o meio.

    // 4. Chame mergeSort para o trecho da direita,
    //    que comeca uma posicao depois do meio e vai ate fim.

    // 5. As duas metades agora estao ordenadas.
    //    Chame merge para intercalar as duas.

}

int main() {
    int itens[6] = {38, 27, 43, 9, 82, 10};
    mergeSort(itens, 0, 5);
    mostrar(itens, 6);
    return 0;
}
