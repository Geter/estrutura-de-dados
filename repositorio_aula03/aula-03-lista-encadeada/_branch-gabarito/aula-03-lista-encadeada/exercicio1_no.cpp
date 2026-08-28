// ============================================================
// Exercicio 1 - Criar o primeiro no - RESOLUCAO
// ============================================================

#include <iostream>
using namespace std;

// PASSO 1: a struct No guarda o dado e o endereco do proximo no
struct No {
    int valor;
    No* proximo;
};

int main() {

    // PASSO 2: no criado como variavel comum
    No primeiro;

    // PASSO 3: acesso ao campo com ponto, porque nao e ponteiro
    primeiro.valor = 10;

    // PASSO 4: ainda nao existe um proximo no
    primeiro.proximo = nullptr;

    // PASSO 5
    cout << primeiro.valor << endl;

    return 0;
}
