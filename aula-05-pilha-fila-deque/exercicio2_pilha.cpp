// ============================================================
// Exercicio 2 - Pilha
// Estrutura de Dados - IFSP Campus Campos do Jordao
// ============================================================
//
// A pilha guarda os dados em um array e controla o topo com um
// indice. O topo indica a proxima posicao livre.
//
// Saida esperada:
// 30 20 10
//
// ============================================================

#include <iostream>
using namespace std;

#define TAMANHO 100

// O array e o topo andam sempre juntos, entao ficam agrupados
// sob um mesmo nome.
struct Pilha {
    int itens[TAMANHO];
    int topo;
};

// ------------------------------------------------------------
// PASSO 1
// Complete a funcao push, que coloca um valor no topo.
//
// Sao duas acoes:
//   1. guardar o valor na posicao indicada por topo
//   2. avancar o topo em um
//
// Repare no e comercial em Pilha& pilha. Ele faz a funcao
// receber a pilha original, e nao uma copia. Sem ele, a
// insercao se perderia ao sair da funcao.
// ------------------------------------------------------------

void push(Pilha& pilha, int valor) {

    // escreva aqui

}

// ------------------------------------------------------------
// PASSO 2
// Complete a funcao pop, que retira o valor do topo.
//
// Basta recuar o topo em um. Nada precisa ser apagado: o valor
// continua gravado no array, mas aquela posicao passa a ser
// considerada livre e sera sobrescrita na proxima insercao.
// ------------------------------------------------------------

void pop(Pilha& pilha) {

    // escreva aqui

}

// ------------------------------------------------------------
// PASSO 3
// Complete a funcao top, que devolve o valor do topo sem
// remover.
//
// Atencao: topo indica a proxima posicao LIVRE. O valor que
// esta no topo da pilha fica uma posicao antes.
// ------------------------------------------------------------

int top(Pilha& pilha) {

    // escreva aqui

    return 0; // troque este retorno
}

// ------------------------------------------------------------
// PASSO 4
// Complete a funcao isEmpty, que devolve true se a pilha
// estiver vazia.
//
// A pilha esta vazia quando o topo vale zero.
// ------------------------------------------------------------

bool isEmpty(Pilha& pilha) {

    // escreva aqui

    return true; // troque este retorno
}

int main() {

    Pilha pilha;

    // --------------------------------------------------------
    // PASSO 5
    // A pilha precisa comecar com o topo valendo zero.
    // Faca isso antes do primeiro push.
    // --------------------------------------------------------

    // escreva aqui


    // --------------------------------------------------------
    // PASSO 6
    // Empilhe os valores 10, 20 e 30, nessa ordem.
    //
    // Modelo:  push(pilha, 10);
    // --------------------------------------------------------

    // escreva aqui


    // --------------------------------------------------------
    // PASSO 7
    // Esvazie a pilha imprimindo cada valor seguido de um
    // espaco.
    //
    // Repita enquanto a pilha nao estiver vazia. Dentro do laco,
    // imprima o topo com top e depois remova com pop.
    //
    // Modelo do laco:  while (!isEmpty(pilha)) { ... }
    // --------------------------------------------------------

    // escreva aqui


    cout << endl;
    return 0;
}
