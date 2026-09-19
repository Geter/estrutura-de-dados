// ============================================================
// Exercicio 2 - Quick Sort
// ============================================================
// A funcao particionar ja esta pronta abaixo. Ela escolhe o
// ultimo elemento do trecho como pivo, reorganiza o trecho
// deixando os menores a esquerda e os maiores a direita, e
// devolve a POSICAO onde o pivo ficou.
//
// Depois de particionar, o pivo ja esta na posicao final dele
// e nao precisa mais ser movido.
//
// Escreva a funcao quickSort.
//
// int itens[6] = {38, 27, 43, 9, 82, 10};
// quickSort(itens, 0, 5);
//
// Saida esperada:
// 9 10 27 38 43 82
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

// ------------------------------------------------------------
// PRONTA: separa o trecho e devolve a posicao final do pivo
// ------------------------------------------------------------
int particionar(int itens[], int inicio, int fim) {

    int pivo = itens[fim];          // o ultimo elemento e o pivo
    int limite = inicio - 1;        // ate onde vao os menores

    // percorre ate fim - 1, porque a ultima posicao e o pivo
    for (int i = inicio; i < fim; i++) {
        if (itens[i] <= pivo) {
            limite = limite + 1;
            swap(itens[limite], itens[i]);
        }
    }

    // coloca o pivo entre os menores e os maiores
    swap(itens[limite + 1], itens[fim]);

    return limite + 1;
}

// ------------------------------------------------------------
// Escreva a funcao quickSort.
//
// Ela ordena o trecho itens[inicio..fim].
// ------------------------------------------------------------
void quickSort(int itens[], int inicio, int fim) {

    / 1. Caso base: se o trecho tem um elemento ou menos,
    //    ja esta ordenado. Encerre a funcao aqui.

    // 2. Chame particionar e guarde em uma variavel a posicao
    //    que ela devolve. E a posicao final do pivo.

    // 3. Chame quickSort para o lado dos menores, que vai de
    //    inicio ate uma posicao antes do pivo.

    // 4. Chame quickSort para o lado dos maiores, que comeca
    //    uma posicao depois do pivo e vai ate fim.

    // 5. Nao chame nada depois. O particionar ja deixou o pivo
    //    no lugar certo, e as duas chamadas cuidam do resto.


}

int main() {
    int itens[6] = {38, 27, 43, 9, 82, 10};
    quickSort(itens, 0, 5);
    mostrar(itens, 6);
    return 0;
}
