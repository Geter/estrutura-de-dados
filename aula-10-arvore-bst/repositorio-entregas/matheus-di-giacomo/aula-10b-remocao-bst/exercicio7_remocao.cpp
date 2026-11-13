// ============================================================
// Exercicio 7 - Remocao usando o sucessor
// ============================================================
// Em aula, o caso de dois filhos foi resolvido com o PREDECESSOR,
// o maior valor da subarvore esquerda.
//
// Aqui voce vai escrever a mesma funcao apagar usando o SUCESSOR:
// o MENOR valor da subarvore DIREITA.
//
// Os casos 1 e 2 nao mudam. So o caso 3 muda.
//
// Arvore de teste:          40
//                       20      60
//                     10  30  50  70
//                        /       /
//                      25      65
//
// Saida esperada (em pre-ordem):
// inicial:    40 20 10 30 25 60 50 70 65
// sem o 10:   40 20 30 25 60 50 70 65
// sem o 30:   40 20 25 60 50 70 65
// sem o 60:   40 20 25 65 50 70
//
// Se a ultima linha sair diferente, confira qual no voce usou
// no caso 3.
// ============================================================

#include <iostream>
using namespace std;

// ------------------------------------------------------------
// PRONTA: a estrutura do no
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
// PRONTA: insercao
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
// PRONTA: percurso pre-ordem
// ------------------------------------------------------------
void preOrdem(No* raiz) {
    if (raiz == nullptr) {
        return;
    }
    cout << raiz->valor << " ";
    preOrdem(raiz->esq);
    preOrdem(raiz->dir);
}

// ------------------------------------------------------------
// Escreva a funcao apagar, usando o sucessor no caso 3.
// ------------------------------------------------------------
No* apagar(No* raiz, int valor) {

    // Encontrar o no: igual ao que foi visto em aula.
    if (raiz == nullptr) {
        return nullptr;
    }
    if (valor < raiz->valor) {
        raiz->esq = apagar(raiz->esq, valor);
        return raiz;
    }
    if (valor > raiz->valor) {
        raiz->dir = apagar(raiz->dir, valor);
        return raiz;
    }

    // Caso 1, sem filhos: igual ao visto em aula.
    if (raiz->esq == nullptr && raiz->dir == nullptr) {
        delete raiz;
        return nullptr;
    }

    // Caso 2, um unico filho: igual ao visto em aula.
    if (raiz->esq == nullptr) {
        No* filho = raiz->dir;
        delete raiz;
        return filho;
    }
    if (raiz->dir == nullptr) {
        No* filho = raiz->esq;
        delete raiz;
        return filho;
    }

    // Caso 3, dois filhos: aqui esta a diferenca.
    // Onde fica o menor valor da subarvore direita?
    // Depois de copiar esse valor para a raiz, de qual
    // subarvore ele precisa ser removido?
    No* sucessor = raiz->dir;
    while (sucessor->esq != nullptr) {
        sucessor = sucessor->esq;
    }
    raiz->valor = sucessor->valor;
    raiz->dir = apagar(raiz->dir, sucessor->valor);
    return raiz;
}

int main() {
    int valores[9] = {40, 20, 60, 10, 30, 50, 70, 25, 65};
    No* raiz = nullptr;
    for (int i = 0; i < 9; i++) {
        raiz = inserir(raiz, valores[i]);
    }

    cout << "inicial:    "; preOrdem(raiz); cout << endl;
    raiz = apagar(raiz, 10);
    cout << "sem o 10:   "; preOrdem(raiz); cout << endl;
    raiz = apagar(raiz, 30);
    cout << "sem o 30:   "; preOrdem(raiz); cout << endl;
    raiz = apagar(raiz, 60);
    cout << "sem o 60:   "; preOrdem(raiz); cout << endl;
    return 0;
}
