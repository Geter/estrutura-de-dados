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
    void percorrerPorNivel(No* raiz) {
    if (raiz == nullptr) {
        return;
    }

    queue<No*> fila;
    fila.push(raiz);

    bool primeiro = true;

    while (!fila.empty()) {
        No* atual = fila.front();
        fila.pop();

        if (!primeiro) {
            cout << " ";
        }
        cout << atual->valor;
        primeiro = false;

        for (No* filho : atual->filhos) {
            fila.push(filho);
        }
    }
}