// ============================================================
// Exercicio 3 - Lista duplamente encadeada - RESOLUCAO
// ============================================================

#include <iostream>
using namespace std;

// PASSO 1: o campo anterior foi acrescentado
struct No {
    int valor;
    No* anterior;
    No* proximo;
};

int main() {

    // PASSO 2
    No* primeiro = new No;
    primeiro->valor = 10;

    No* segundo = new No;
    segundo->valor = 20;

    No* terceiro = new No;
    terceiro->valor = 30;

    // PASSO 3: cada ligacao aparece nos dois sentidos
    primeiro->anterior = nullptr;
    primeiro->proximo = segundo;

    segundo->anterior = primeiro;
    segundo->proximo = terceiro;

    terceiro->anterior = segundo;
    terceiro->proximo = nullptr;

    // PASSO 4: parte do ultimo no e caminha pelo campo anterior
    No* atual = terceiro;

    while (atual != nullptr) {
        cout << atual->valor << " ";
        atual = atual->anterior;
    }
    cout << endl;

    delete primeiro;
    delete segundo;
    delete terceiro;

    return 0;
}
