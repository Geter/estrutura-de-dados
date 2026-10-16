// ============================================================
// Exercicio 6 - Menor e maior valor
// ============================================================
// Escreva as funcoes menorValor e maiorValor.
//
// Nenhuma das duas precisa percorrer a arvore inteira. Pense em
// onde a propriedade da BST coloca cada um deles.
//
// Saida esperada:
// Menor: 10
// Maior: 80
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
// Escreva as duas funcoes.
// ------------------------------------------------------------
int menorValor(No* raiz) {
    if (raiz->esq == nullptr) {
        return raiz->valor;
    }
    return menorValor(raiz->esq);
}

int maiorValor(No* raiz) {
    if (raiz->dir == nullptr) {
        return raiz->valor;
    }
    return maiorValor(raiz->dir);
}

int main() {
    No* raiz = montarArvoreDeTeste();
    cout << "Menor: " << menorValor(raiz) << endl;
    cout << "Maior: " << maiorValor(raiz) << endl;
    return 0;
}
