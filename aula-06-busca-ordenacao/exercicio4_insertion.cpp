// ============================================================
// Exercicio 4 - Insertion Sort
// Estrutura de Dados - IFSP Campus Campos do Jordao
// ============================================================
//
// E o modo como se organiza um baralho na mao. Cada valor novo
// e comparado com os que ja estao ordenados, da direita para a
// esquerda, ate achar o lugar dele.
//
// Saida esperada:
// 10 20 30 40 50 60
//
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
// PASSO 1
// Complete a funcao insertionSort.
//
// O laco de fora comeca em UM, e nao em zero, porque o
// primeiro elemento sozinho ja e um trecho ordenado:
//     for (int i = 1; i < quantidade; i++) {
//
// Dentro dele:
//
//   1. guarde o valor da posicao atual em uma variavel:
//          int atual = itens[i];
//
//   2. crie um indice que caminha para tras:
//          int j = i - 1;
//
//   3. enquanto j for maior ou igual a zero E itens[j] for
//      maior que atual, desloque itens[j] uma posicao para a
//      direita e recue o j:
//          itens[j + 1] = itens[j];
//          j = j - 1;
//
//   4. quando o laco parar, o espaco certo foi aberto.
//      Coloque o valor guardado nele:
//          itens[j + 1] = atual;
//
// Atencao: o teste j >= 0 precisa vir ANTES da comparacao com
// itens[j], senao o programa acessa uma posicao invalida.
// ------------------------------------------------------------

void insertionSort(int itens[], int quantidade) {

    // escreva aqui

}

int main() {

    int itens[6] = {40, 10, 50, 20, 60, 30};

    // --------------------------------------------------------
    // PASSO 2
    // Chame insertionSort e depois mostrar.
    // --------------------------------------------------------

    // escreva aqui


    return 0;
}
