// Projeto - Cadastro de produtos
// Uma árvore binária de busca organiza os códigos únicos dos produtos.
#include <iostream>
#include <limits>
using namespace std;

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

No* inserir(No* raiz, int valor, bool& inserido) {
    if (raiz == nullptr) {
        inserido = true;
        return new No(valor);
    }
    if (valor < raiz->valor) {
        raiz->esq = inserir(raiz->esq, valor, inserido);
    } else if (valor > raiz->valor) {
        raiz->dir = inserir(raiz->dir, valor, inserido);
    }
    return raiz;
}

void listarEmOrdem(No* raiz) {
    if (raiz == nullptr) {
        return;
    }
    listarEmOrdem(raiz->esq);
    cout << raiz->valor << " ";
    listarEmOrdem(raiz->dir);
}

bool buscarComCaminho(No* raiz, int valor) {
    if (raiz == nullptr) {
        cout << "(vazio)" << endl;
        return false;
    }

    cout << raiz->valor;
    if (valor == raiz->valor) {
        cout << endl;
        return true;
    }

    cout << " ";
    if (valor < raiz->valor) {
        return buscarComCaminho(raiz->esq, valor);
    }
    return buscarComCaminho(raiz->dir, valor);
}

int contarProdutos(No* raiz) {
    if (raiz == nullptr) {
        return 0;
    }
    return 1 + contarProdutos(raiz->esq) + contarProdutos(raiz->dir);
}

void liberarArvore(No* raiz) {
    if (raiz == nullptr) {
        return;
    }
    liberarArvore(raiz->esq);
    liberarArvore(raiz->dir);
    delete raiz;
}

bool lerInteiro(int& valor) {
    if (cin >> valor) {
        return true;
    }
    if (!cin.eof()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Digite um número inteiro." << endl;
    }
    return false;
}

int main() {
    No* raiz = nullptr;
    int opcao = -1;

    while (opcao != 0 && !cin.eof()) {
        cout << "\n1 - Cadastrar produto\n"
             << "2 - Buscar produto\n"
             << "3 - Listar em ordem\n"
             << "4 - Total cadastrado\n"
             << "0 - Sair\n"
             << "Opção: ";
        if (!lerInteiro(opcao)) {
            opcao = -1;
            continue;
        }

        if (opcao == 1 || opcao == 2) {
            int codigo;
            cout << "Código: ";
            if (!lerInteiro(codigo)) {
                continue;
            }

            if (opcao == 1) {
                bool inserido = false;
                raiz = inserir(raiz, codigo, inserido);
                cout << (inserido ? "Cadastrado." : "Código já cadastrado.") << endl;
            } else {
                cout << "Caminho: ";
                if (buscarComCaminho(raiz, codigo)) {
                    cout << "Encontrado." << endl;
                } else {
                    cout << "Não encontrado." << endl;
                }
            }
        } else if (opcao == 3) {
            if (raiz == nullptr) {
                cout << "Nenhum produto cadastrado.";
            } else {
                listarEmOrdem(raiz);
            }
            cout << endl;
        } else if (opcao == 4) {
            cout << contarProdutos(raiz) << " produtos." << endl;
        } else if (opcao != 0) {
            cout << "Opção inválida." << endl;
        }
    }

    liberarArvore(raiz);
    return 0;
}
