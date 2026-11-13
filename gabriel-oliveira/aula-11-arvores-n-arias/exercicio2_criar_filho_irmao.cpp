// ============================================================
// Exercicio 2 - Criar filho com primogenito e irmao
// ============================================================
// Escreva a funcao criarFilho para o no que tem apenas dois
// ponteiros: primogenito e proximoIrmao.
//
// O novo filho sempre entra no FIM da lista de irmaos, para que
// a ordem de criacao seja mantida.
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
// Saida esperada: exatamente o desenho acima, com a mesma
// indentacao.
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

void percorrer(No* raiz, int nivel)
{
    if (raiz == nullptr) return;
    for (int i = 0; i < nivel; i++) cout << "  ";
    cout << raiz->valor << endl;
    percorrer(raiz->primogenito, nivel + 1);
    percorrer(raiz->proximoIrmao, nivel);
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
    criarFilho(raiz, "README.md");
    percorrer(raiz, 0);
    return 0;
}
