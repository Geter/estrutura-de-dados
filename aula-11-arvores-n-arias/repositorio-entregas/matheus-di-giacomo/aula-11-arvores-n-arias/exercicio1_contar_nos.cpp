// ============================================================
// Exercicio 1 - Contar os nos
// ============================================================
// Escreva a funcao contarNos, que devolve quantos nos a arvore
// tem no total, contando a raiz.
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
// A arvore tem 9 nos.
// ============================================================

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
// Escreva a funcao contarNos.
// ------------------------------------------------------------
int contarNos(No* raiz) {

    // 1. Caso base: se a raiz for nullptr, nao ha nenhum no.
    //    Devolva 0.
    if (raiz == nullptr) {
        return 0;
    }

    // 2. Crie uma variavel total comecando em 1. Esse 1 conta
    //    o proprio no em que voce esta.
    int total = 1;

    // 3. Percorra o vetor raiz->filhos com um for. Para cada
    //    filho, some ao total o resultado de contarNos(filho).
    for (No* filho : raiz->filhos) {
        total += contarNos(filho);
    }

    // 4. Devolva o total.
    return total;
}

int main() {
    No* raiz = montarArvore();
    cout << "A arvore tem " << contarNos(raiz) << " nos." << endl;
    return 0;
}
