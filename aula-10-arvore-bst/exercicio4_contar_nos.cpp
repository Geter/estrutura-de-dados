// ============================================================
// Exercicio 4 - Contar os nos
// ============================================================
// Escreva a funcao contarNos, que devolve quantos nos a arvore
// tem no total.
//
// Dica: o total e a soma de tres coisas.
//
// Saida esperada:
// A arvore tem 9 nos.
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
// Escreva a funcao contarNos.
// ------------------------------------------------------------
int contarNos(No* raiz) {
    if (raiz == nullptr) {
        return 0;
    }
    return 1 + contarNos(raiz->esq) + contarNos(raiz->dir);
}

int main() {
    No* raiz = montarArvoreDeTeste();
    cout << "A arvore tem " << contarNos(raiz) << " nos." << endl;
    return 0;
}
