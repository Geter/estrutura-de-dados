// ============================================================
// Exercicio 2 - Ligar os nos e percorrer - RESOLUCAO
// ============================================================

#include <iostream>
using namespace std;

struct No {
    int valor;
    No* proximo;
};

int main() {

    // PASSO 1 e 2: os tres nos criados no heap com new
    No* primeiro = new No;
    primeiro->valor = 10;

    No* segundo = new No;
    segundo->valor = 20;

    No* terceiro = new No;
    terceiro->valor = 30;

    // PASSO 3: a corrente e formada aqui
    primeiro->proximo = segundo;
    segundo->proximo = terceiro;
    terceiro->proximo = nullptr;

    // PASSO 4: ponteiro que vai caminhar pela lista
    No* atual = primeiro;

    // PASSO 5: quem avisa que a lista acabou e o nullptr
    while (atual != nullptr) {
        cout << atual->valor << " ";
        atual = atual->proximo;
    }
    cout << endl;

    // memoria devolvida ao sistema
    delete primeiro;
    delete segundo;
    delete terceiro;

    return 0;
}
