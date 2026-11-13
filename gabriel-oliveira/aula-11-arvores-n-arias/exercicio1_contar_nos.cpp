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

struct No
{
    string valor;
    vector<No*> filhos;
    No(string v) : valor(v) {}
};
No* criarFilho(No* pai, string valor)
{
    No* filho = new No(valor);
    pai->filhos.push_back(filho);
    return filho;
}
No* montarArvore()
{
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

int contarNos(No* raiz)
{
    if (raiz == nullptr) return 0;
    int total = 1; // Conta o no atual.
    for (No* filho : raiz->filhos) total += contarNos(filho);
    return total;
}
int main()
{
    cout << "A arvore tem " << contarNos(montarArvore()) << " nos." << endl;
    return 0;
}
