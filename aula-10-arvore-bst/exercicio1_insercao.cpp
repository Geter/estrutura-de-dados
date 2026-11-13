// ============================================================
// Exercicio 1 - Insercao
// ============================================================
// Escreva a funcao inserir.
//
// Ela recebe a raiz da arvore e um valor, e devolve a raiz da
// arvore com o valor ja inserido no lugar certo.
//
// Saida esperada:
// 10 20 30 35 40 50 60 70 80
// ============================================================

#include <iostream>
using namespace std;

// ------------------------------------------------------------
// PRONTA: a estrutura do no, igual a que foi usada em aula
// ------------------------------------------------------------
struct No {
    int valor;
    No* esq;
    No* dir;

    No(int novoValor) {
        valor = novoValor;
        esq = nullptr;
        dir = nullptr;
    }
};

// ------------------------------------------------------------
// PRONTA: imprime os valores em ordem crescente, para voce
// conferir se a insercao funcionou
// ------------------------------------------------------------
void conferir(No* raiz) {
    if (raiz == nullptr) {
        return;
    }
    conferir(raiz->esq);
    cout << raiz->valor << " ";
    conferir(raiz->dir);
}

// ------------------------------------------------------------
// Escreva a funcao inserir.
// ------------------------------------------------------------
No* inserir(No* raiz, int valor) {

    if (raiz == nullptr) {
        return new No(valor);
    }
    if (valor < raiz->valor) {
        raiz->esq = inserir(raiz->esq, valor);
    } else if (valor > raiz->valor) {
        raiz->dir = inserir(raiz->dir, valor);
    }
    return raiz;
}

int main() {
    int codigos[9] = {50, 30, 70, 20, 40, 60, 80, 10, 35};
    No* raiz = nullptr;
    for (int i = 0; i < 9; i++) {
        raiz = inserir(raiz, codigos[i]);
    }
    conferir(raiz);
    cout << endl;
    return 0;
}
