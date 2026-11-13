// ============================================================
// Exercicio 3 - Pesquisa
// ============================================================
// Escreva a funcao pesquisa, que devolve true se o valor existe
// na arvore e false se nao existe.
//
// Ela segue o MESMO caminho da insercao. A diferenca esta no que
// acontece ao chegar em uma posicao vazia.
//
// Saida esperada:
// 35 existe? sim
// 55 existe? nao
// 10 existe? sim
// 80 existe? sim
// 99 existe? nao
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
// Escreva a funcao pesquisa.
// ------------------------------------------------------------
bool pesquisa(No* raiz, int valor) {

    if (raiz == nullptr) {
        return false;
    }
    if (valor == raiz->valor) {
        return true;
    }
    if (valor < raiz->valor) {
        return pesquisa(raiz->esq, valor);
    }
    return pesquisa(raiz->dir, valor);
}

int main() {
    No* raiz = montarArvoreDeTeste();
    int procurados[5] = {35, 55, 10, 80, 99};

    for (int i = 0; i < 5; i++) {
        cout << procurados[i] << " existe? ";
        if (pesquisa(raiz, procurados[i])) {
            cout << "sim" << endl;
        } else {
            cout << "nao" << endl;
        }
    }
    return 0;
}
