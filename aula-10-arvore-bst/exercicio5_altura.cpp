// ============================================================
// Exercicio 5 - Altura da arvore
// ============================================================
// Escreva a funcao altura, que devolve o numero de arestas do
// caminho mais longo da raiz ate uma folha.
//
// Uma arvore com apenas a raiz tem altura 0.
//
// A funcao max, de <algorithm>, devolve o maior entre dois
// numeros: max(3, 7) devolve 7.
//
// Saida esperada:
// Altura: 3
// ============================================================

#include <algorithm>
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
// Escreva a funcao altura.
// ------------------------------------------------------------
int altura(No* raiz) {
    if (raiz == nullptr) {
        return -1;
    }
    return 1 + max(altura(raiz->esq), altura(raiz->dir));
}

int main() {
    No* raiz = montarArvoreDeTeste();
    cout << "Altura: " << altura(raiz) << endl;
    return 0;
}
