// ============================================================
// Exercicio 3 - Contar os filhos de um no
// ============================================================
// Escreva a funcao contarFilhos, que devolve quantos filhos
// DIRETOS um no tem. Netos nao contam.
//
// Lembre que o pai so conhece o primogenito.
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
// Filhos diretos de projeto: 3
// Filhos diretos de src: 2
// Filhos diretos de estruturas: 2
// Filhos diretos de docs: 1
// Filhos diretos de README.md: 0
// ============================================================
#include <iostream>
#include <string>
using namespace std;
struct No
{
    string valor;
    No* primogenito;
    No* proximoIrmao;
    No(string v) : valor(v), primogenito(nullptr), proximoIrmao(nullptr) {}
};
No* criarFilho(No* pai, string valor)
{
    No* filho = new No(valor);
    if (pai->primogenito == nullptr) pai->primogenito = filho;
    else
    {
        No* atual = pai->primogenito;
        while (atual->proximoIrmao != nullptr) atual = atual->proximoIrmao;
        atual->proximoIrmao = filho;
    }
    return filho;
}

int contarFilhos(No* pai)
{
    if (pai == nullptr) return 0;
    int total = 0;
    No* atual = pai->primogenito;
    while (atual != nullptr)
    {
        total++;
        atual = atual->proximoIrmao;
    }
    return total;
}
int main()
{
    No* raiz = new No("projeto");
    No* src = criarFilho(raiz, "src");
    criarFilho(src, "main.cpp");
    No* estruturas = criarFilho(src, "estruturas");
    criarFilho(estruturas, "lista.cpp");
    criarFilho(estruturas, "pilha.cpp");
    No* docs = criarFilho(raiz, "docs");
    criarFilho(docs, "manual.pdf");
    No* readme = criarFilho(raiz, "README.md");
    No* testados[5] = {raiz, src, estruturas, docs, readme};
    for (int i = 0; i < 5; i++)
        cout << "Filhos diretos de " << testados[i]->valor << ": " << contarFilhos(testados[i]) << endl;
    return 0;
}
