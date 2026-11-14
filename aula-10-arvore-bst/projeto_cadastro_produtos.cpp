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
    bool existe(No* raiz, int valor) {
    if (raiz == nullptr) {
        return false;
    }
    if (valor == raiz->valor) {
        return true;
    }
    if (valor < raiz->valor) {
        return existe(raiz->esq, valor);
    }
    return existe(raiz->dir, valor);
}if (opcao == 1) {
    cout << "Codigo: ";
    cin >> codigo;
    if (existe(raiz, codigo)) {
        cout << "Codigo ja cadastrado." << endl;
    } else {
        raiz = inserir(raiz, codigo);
        cout << "Cadastrado." << endl;
    }
}