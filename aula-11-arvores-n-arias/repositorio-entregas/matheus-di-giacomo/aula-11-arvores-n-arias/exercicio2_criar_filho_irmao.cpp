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

// ------------------------------------------------------------
// PRONTA: o no com primogenito e proximo irmao
// ------------------------------------------------------------
struct No {
    string valor;
    No* primogenito;
    No* proximoIrmao;

    No(string novoValor) {
        valor = novoValor;
        primogenito = nullptr;
        proximoIrmao = nullptr;
    }
};

// ------------------------------------------------------------
// PRONTA: imprime a arvore com indentacao
// ------------------------------------------------------------
void percorrer(No* raiz, int nivel) {
    if (raiz == nullptr) {
        return;
    }
    for (int i = 0; i < nivel; i++) {
        cout << "  ";
    }
    cout << raiz->valor << endl;
    percorrer(raiz->primogenito, nivel + 1);
    percorrer(raiz->proximoIrmao, nivel);
}

// ------------------------------------------------------------
// Escreva a funcao criarFilho.
// ------------------------------------------------------------
No* criarFilho(No* pai, string valor) {

    // 1. Crie o novo no com new No(valor).
    No* filho = new No(valor);

    // 2. Se o pai ainda nao tem primogenito, o novo no passa a
    //    ser o primogenito dele.
    if (pai->primogenito == nullptr) {
        pai->primogenito = filho;
    } else {

    // 3. Se ja tem, use um ponteiro auxiliar que comeca no
    //    primogenito e anda pelo proximoIrmao enquanto existir
    //    um proximo. Quando parar, voce esta no ultimo irmao.
    //    Ligue o novo no ao proximoIrmao desse ultimo.
        No* atual = pai->primogenito;
        while (atual->proximoIrmao != nullptr) {
            atual = atual->proximoIrmao;
        }
        atual->proximoIrmao = filho;
    }

    // 4. Devolva o novo no.
    return filho;
}

int main() {
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
