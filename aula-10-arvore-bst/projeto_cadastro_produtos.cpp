// ============================================================
// Projeto - Cadastro de produtos
// ============================================================
// Uma loja precisa gerenciar produtos por codigo. Os codigos sao
// numeros inteiros unicos e o sistema deve manter sempre a ordem
// para facilitar a busca.
//
// O programa mostra um menu e repete ate o usuario escolher sair:
//
//   1 - Cadastrar produto
//   2 - Buscar produto e mostrar o caminho percorrido
//   3 - Listar todos os codigos em ordem crescente
//   4 - Mostrar quantos produtos estao cadastrados
//   0 - Sair
//
// A estrutura do no e a insercao ja estao prontas. O resto e seu.
//
// Teste com estes codigos, nesta ordem:
// 50, 30, 70, 20, 40, 60, 80, 10, 35
//
// A remocao fica para o proximo encontro.
// ============================================================

#include <iostream>
using namespace std;

// ------------------------------------------------------------
// PRONTA: a estrutura do no
// ------------------------------------------------------------
struct No {
    int valor;
    No* esq;
    No* dir;

    No(int novoValor) {
        valor = novoValor;
        esq = nullptr;
        dir = nullptr;
    }
};

// ------------------------------------------------------------
// PRONTA: insere um codigo mantendo a propriedade da BST
// ------------------------------------------------------------
No* inserir(No* raiz, int valor) {
    if (raiz == nullptr) {
        return new No(valor);
    }
    if (valor < raiz->valor) {
        raiz->esq = inserir(raiz->esq, valor);
    } else if (valor > raiz->valor) {
        raiz->dir = inserir(raiz->dir, valor);
    }
    return raiz;
}

// ------------------------------------------------------------
// Escreva a funcao listarEmOrdem.
// ------------------------------------------------------------
void listarEmOrdem(No* raiz) {
    if (raiz == nullptr) {
        return;
    }
    listarEmOrdem(raiz->esq);
    cout << raiz->valor << " ";
    listarEmOrdem(raiz->dir);
}

// ------------------------------------------------------------
// Escreva a funcao buscarComCaminho.
// ------------------------------------------------------------
bool buscarComCaminho(No* raiz, int valor) {
    if (raiz == nullptr) {
        cout << "(vazio)" << endl;
        return false;
    }
    cout << raiz->valor << " ";
    if (valor == raiz->valor) {
        cout << endl;
        return true;
    }
    if (valor < raiz->valor) {
        return buscarComCaminho(raiz->esq, valor);
    }
    return buscarComCaminho(raiz->dir, valor);
}

// ------------------------------------------------------------
// Escreva a funcao contarProdutos.
// ------------------------------------------------------------
int contarProdutos(No* raiz) {
    if (raiz == nullptr) {
        return 0;
    }
    return 1 + contarProdutos(raiz->esq) + contarProdutos(raiz->dir);
}

// ------------------------------------------------------------
// Escreva o menu dentro da main.
// ------------------------------------------------------------
int main() {
    No* raiz = nullptr;
    int opcao = -1;
    int codigo;

    while (opcao != 0) {
        cout << endl;
        cout << "1 - Cadastrar produto" << endl;
        cout << "2 - Buscar produto" << endl;
        cout << "3 - Listar em ordem" << endl;
        cout << "4 - Total cadastrado" << endl;
        cout << "0 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            cout << "Codigo: ";
            cin >> codigo;
            raiz = inserir(raiz, codigo);
            cout << "Cadastrado." << endl;
        } else if (opcao == 2) {
            cout << "Codigo: ";
            cin >> codigo;
            cout << "Caminho: ";
            if (buscarComCaminho(raiz, codigo)) {
                cout << "Encontrado." << endl;
            } else {
                cout << "Nao encontrado." << endl;
            }
        } else if (opcao == 3) {
            listarEmOrdem(raiz);
            cout << endl;
        } else if (opcao == 4) {
            cout << contarProdutos(raiz) << " produtos." << endl;
        }
    }
    return 0;
}
