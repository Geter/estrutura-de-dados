// Desafio - Percorrer nível por nível
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

struct No {
    string valor;
    vector<No*> filhos;

    No(string novoValor) {
        valor = novoValor;
    }
};

No* criarFilho(No* pai, string valor) {
    No* filho = new No(valor);
    pai->filhos.push_back(filho);
    return filho;
}

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

void percorrerPorNivel(No* raiz) {
    if (raiz == nullptr) {
        return;
    }

    queue<No*> fila;
    fila.push(raiz);

    while (!fila.empty()) {
        No* atual = fila.front();
        fila.pop();
        cout << atual->valor;

        // Os filhos entram depois dos nós que ainda estão no nível atual.
        for (No* filho : atual->filhos) {
            fila.push(filho);
        }
        if (!fila.empty()) {
            cout << " ";
        }
    }
}

void liberarArvore(No* raiz) {
    for (No* filho : raiz->filhos) {
        liberarArvore(filho);
    }
    delete raiz;
}

int main() {
    No* raiz = montarArvore();
    percorrerPorNivel(raiz);
    cout << endl;
    liberarArvore(raiz);
    return 0;
}
