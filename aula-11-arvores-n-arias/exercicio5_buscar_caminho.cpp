// ============================================================
// Exercicio 5 - O caminho ate um arquivo
// ============================================================
// Escreva a funcao buscarCaminho. Ela procura um nome na arvore
// e, se encontrar, imprime o caminho completo ate ele, com os
// nomes separados por barra. Devolve true se encontrou e false
// se nao encontrou.
//
// O parametro caminho guarda o que ja foi percorrido ate aqui.
// Na primeira chamada ele e uma string vazia.
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
// pilha.cpp: projeto/src/estruturas/pilha.cpp
// manual.pdf: projeto/docs/manual.pdf
// projeto: projeto
// video.mp4: nao encontrado
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
// Escreva a funcao buscarCaminho.
// ------------------------------------------------------------
bool buscarCaminho(No* raiz, string alvo, string caminho) {

}

int main() {
    No* raiz = montarArvore();
    string procurados[4] = {"pilha.cpp", "manual.pdf", "projeto", "video.mp4"};

    for (int i = 0; i < 4; i++) {
        cout << procurados[i] << ": ";
        if (!buscarCaminho(raiz, procurados[i], "")) {
            cout << "nao encontrado" << endl;
        }
    }
    return 0;
}
