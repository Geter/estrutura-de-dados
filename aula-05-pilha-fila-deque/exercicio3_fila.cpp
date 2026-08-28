// ============================================================
// Exercicio 3 - Fila
// Estrutura de Dados - IFSP Campus Campos do Jordao
// ============================================================
//
// Na fila os dados entram por uma ponta e saem pela outra,
// entao sao necessarios dois indices.
//
// Saida esperada:
// 10 20 30
//
// ============================================================

#include <iostream>
using namespace std;

#define TAMANHO 100

struct Fila {
    int itens[TAMANHO];
    int inicio;   // quem e o proximo a sair
    int fim;      // proxima posicao livre
};

// ------------------------------------------------------------
// PASSO 1
// Complete a funcao enqueue, que insere no fim da fila.
//
// Sao duas acoes, iguais as do push da pilha:
//   1. guardar o valor na posicao indicada por fim
//   2. avancar o fim em um
// ------------------------------------------------------------

void enqueue(Fila& fila, int valor) {

    // escreva aqui

}

// ------------------------------------------------------------
// PASSO 2
// Complete a funcao dequeue, que retira do inicio da fila.
//
// Basta avancar o inicio em um. Repare que aqui o indice
// avanca, enquanto no pop da pilha ele recuava.
// ------------------------------------------------------------

void dequeue(Fila& fila) {

    // escreva aqui

}

// ------------------------------------------------------------
// PASSO 3
// Complete a funcao front, que devolve o primeiro valor da fila
// sem remover.
//
// Aqui nao existe o menos um: inicio ja aponta direto para quem
// e o proximo a sair.
// ------------------------------------------------------------

int front(Fila& fila) {

    // escreva aqui

    return 0; // troque este retorno
}

// ------------------------------------------------------------
// PASSO 4
// Complete a funcao isEmpty.
//
// A fila esta vazia quando inicio e fim tem o mesmo valor.
// ------------------------------------------------------------

bool isEmpty(Fila& fila) {

    // escreva aqui

    return true; // troque este retorno
}

int main() {

    Fila fila;

    // --------------------------------------------------------
    // PASSO 5
    // Comece com inicio e fim valendo zero.
    // --------------------------------------------------------

    // escreva aqui


    // --------------------------------------------------------
    // PASSO 6
    // Enfileire os valores 10, 20 e 30, nessa ordem.
    // --------------------------------------------------------

    // escreva aqui


    // --------------------------------------------------------
    // PASSO 7
    // Atenda todos, imprimindo cada valor seguido de um espaco.
    //
    // Repita enquanto a fila nao estiver vazia. Dentro do laco,
    // leia o primeiro com front e depois remova com dequeue.
    //
    // Compare a saida com a do exercicio 2. Os valores entraram
    // na mesma ordem, mas sairam ao contrario.
    // --------------------------------------------------------

    // escreva aqui


    cout << endl;
    return 0;
}
