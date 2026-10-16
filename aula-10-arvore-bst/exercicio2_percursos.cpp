// ============================================================
// Exercicio 2 - Os tres percursos
// ============================================================
// Escreva as funcoes emOrdem, preOrdem e posOrdem.
//
// As tres tem o mesmo corpo. A unica diferenca e a POSICAO da
// linha que imprime, em relacao as duas chamadas recursivas.
//
// Saida esperada:
// Em-ordem:  10 20 30 35 40 50 60 70 80
// Pre-ordem: 50 30 20 10 40 35 70 60 80
// Pos-ordem: 10 20 35 40 30 60 80 70 50
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
// PRONTA: insere um valor mantendo a propriedade da BST
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

// ------------------------------------------------------------
// PRONTA: monta a arvore de teste da aula
// ------------------------------------------------------------
No* montarArvoreDeTeste() {
    int codigos[9] = {50, 30, 70, 20, 40, 60, 80, 10, 35};
    No* raiz = nullptr;
    for (int i = 0; i < 9; i++) {
        raiz = inserir(raiz, codigos[i]);
    }
    return raiz;
}

// ------------------------------------------------------------
// Escreva as tres funcoes.
// ------------------------------------------------------------

void emOrdem(No* raiz) {
    if (raiz == nullptr) {
        return;
    }
    emOrdem(raiz->esq);
    cout << raiz->valor << " ";
    emOrdem(raiz->dir);
}

void preOrdem(No* raiz) {
    if (raiz == nullptr) {
        return;
    }
    cout << raiz->valor << " ";
    preOrdem(raiz->esq);
    preOrdem(raiz->dir);
}

void posOrdem(No* raiz) {
    if (raiz == nullptr) {
        return;
    }
    posOrdem(raiz->esq);
    posOrdem(raiz->dir);
    cout << raiz->valor << " ";
}

int main() {
    No* raiz = montarArvoreDeTeste();

    cout << "Em-ordem:  ";
    emOrdem(raiz);
    cout << endl;

    cout << "Pre-ordem: ";
    preOrdem(raiz);
    cout << endl;

    cout << "Pos-ordem: ";
    posOrdem(raiz);
    cout << endl;

    return 0;
}
