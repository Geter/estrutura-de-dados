// ============================================================
// Exercicio 4 - Altura da arvore
// ============================================================
// Escreva a funcao altura, que devolve o numero de arestas do
// caminho mais longo da raiz ate uma folha.
//
// Uma arvore com apenas a raiz tem altura 0.
//
// A funcao max, de <algorithm>, devolve o maior entre dois
// numeros: max(3, 7) devolve 7.
//
// Arvore de teste:
//
//   projeto
//     src
//       main.cpp
//       estruturas
//         lista.cpp
//         pilha.cpp
//     docs
//       manual.pdf
//     README.md
//
// Saida esperada:
// Altura: 3
// ============================================================

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ------------------------------------------------------------
// PRONTA: o no com vetor de filhos
// ------------------------------------------------------------
struct No {
    string valor;
    vector<No*> filhos;

    No(string novoValor) {
        valor = novoValor;
    }
};

// ------------------------------------------------------------
// PRONTA: cria um filho e devolve o endereco dele
// ------------------------------------------------------------
No* criarFilho(No* pai, string valor) {
    No* filho = new No(valor);
    pai->filhos.push_back(filho);
    return filho;
}

// ------------------------------------------------------------
// PRONTA: monta a arvore de teste
// ------------------------------------------------------------
No* montarArvore() {
    No* raiz = new No("projeto");
    No* src = criarFilho(raiz, "src");
    criarFilho(src, "main.cpp");
    No* estruturas = criarFilho(src, "estruturas");
    criarFilho(estruturas, "lista.cpp");
    criarFilho(estruturas, "pilha.cpp");
    No* docs = criarFilho(raiz, "docs");
    criarFilho(docs, "manual.pdf");
    criarFilho(raiz, "README.md");
    return raiz;
}

// ------------------------------------------------------------
// Escreva a funcao altura.
// ------------------------------------------------------------
int altura(No* raiz) {

}

int main() {
    No* raiz = montarArvore();
    cout << "Altura: " << altura(raiz) << endl;
    return 0;
}
