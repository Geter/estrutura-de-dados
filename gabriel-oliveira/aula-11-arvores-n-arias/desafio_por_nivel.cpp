// ============================================================
// Desafio - Percorrer nivel por nivel
// ============================================================
// Escreva a funcao percorrerPorNivel, que imprime primeiro a
// raiz, depois todos os nos do nivel 1, depois todos os do
// nivel 2, e assim por diante.
//
// A recursao nao resolve este problema sozinha: ela sempre desce
// ate o fundo antes de passar ao irmao. Use a fila da aula de
// pilhas e filas, com queue de <queue>.
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
// projeto src docs README.md main.cpp estruturas manual.pdf lista.cpp pilha.cpp
// ============================================================
#include <queue>
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

void percorrerPorNivel(No* raiz)
{
    if (raiz == nullptr) return;
    queue<No*> fila;
    fila.push(raiz);
    while (!fila.empty())
    {
        No* atual = fila.front();
        fila.pop();
        cout << atual->valor << " ";
        for (No* filho : atual->filhos) fila.push(filho);
    }
}
int main()
{
    percorrerPorNivel(montarArvore());
    cout << endl;
    return 0;
}
