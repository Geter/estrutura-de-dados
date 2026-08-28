// ============================================================
// Exercicio 2 - Bubble Sort
// Estrutura de Dados - IFSP Campus Campos do Jordao
// ============================================================
//
// Compara cada elemento com o vizinho da direita e troca os
// dois quando estao fora de ordem.
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

// ------------------------------------------------------------
// PASSO 1
// Complete a funcao bubbleSort.
//
// Sao dois lacos, um dentro do outro:
//
//   O laco de fora conta as passagens. Ele vai de zero ate
//   quantidade - 2, ou seja:  i < quantidade - 1
//
//   O laco de dentro percorre os pares vizinhos. Ele vai de
//   zero ate:  j < quantidade - 1 - i
//
//   O menos i existe porque, ao fim de cada passagem, mais um
//   valor ja esta no lugar certo no fim do vetor. Nao e
//   preciso compara-lo de novo.
//
// Dentro do laco de dentro:
//   se itens[j] for maior que itens[j + 1], troque os dois.
//
// Para trocar os dois, use a funcao swap:
//     swap(itens[j], itens[j + 1]);
//
// Ela troca o conteudo de duas variaveis e evita escrever as
// tres linhas da troca com variavel auxiliar. Vem do cabecalho
// <utility>, ja incluido no arquivo.
// ------------------------------------------------------------

void bubbleSort(int itens[], int quantidade) {

    // escreva aqui

}

int main() {

    int itens[6] = {40, 10, 50, 20, 60, 30};

    // --------------------------------------------------------
    // PASSO 2
    // Chame bubbleSort passando o vetor e a quantidade, e
    // depois chame mostrar para imprimir o resultado.
    // --------------------------------------------------------

    // escreva aqui


    return 0;
}
