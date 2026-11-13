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
// Escreva a funcao percorrerPorNivel.
// ------------------------------------------------------------
void percorrerPorNivel(No* raiz) {

}

int main() {
    No* raiz = montarArvore();
    percorrerPorNivel(raiz);
    cout << endl;
    return 0;
}
