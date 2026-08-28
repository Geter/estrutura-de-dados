// ============================================================
// Exercicio 4 - Lista circular - RESOLUCAO
// ============================================================

#include <iostream>
using namespace std;

struct No {
    int valor;
    No* proximo;
};

int main() {

    // PASSO 1
    No* primeiro = new No;
    primeiro->valor = 10;

    No* segundo = new No;
    segundo->valor = 20;

    No* terceiro = new No;
    terceiro->valor = 30;

    // PASSO 2
    primeiro->proximo = segundo;
    segundo->proximo = terceiro;

    // PASSO 3: o ultimo aponta de volta para o primeiro
    terceiro->proximo = primeiro;

    // PASSO 4: do while imprime antes de testar, entao o no de
    // partida aparece uma vez e o laco para ao retornar a ele
    No* atual = primeiro;

    do {
        cout << atual->valor << " ";
        atual = atual->proximo;
    } while (atual != primeiro);

    cout << endl;

    delete primeiro;
    delete segundo;
    delete terceiro;

    return 0;
}
