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
struct No
{
    int valor;
    No* esq;
    No* dir;
    No(int v) : valor(v), esq(nullptr), dir(nullptr) {}
};
No* inserir(No* raiz, int valor)
{
    if (raiz == nullptr) return new No(valor);
    if (valor < raiz->valor) raiz->esq = inserir(raiz->esq, valor);
    else if (valor > raiz->valor) raiz->dir = inserir(raiz->dir, valor);
    return raiz;
}
void listarEmOrdem(No* raiz)
{
    if (raiz == nullptr) return;
    listarEmOrdem(raiz->esq);
    cout << raiz->valor << " ";
    listarEmOrdem(raiz->dir);
}
bool buscarComCaminho(No* raiz, int valor)
{
    if (raiz == nullptr) { cout << "(vazio)" << endl; return false; }
    cout << raiz->valor << " ";
    if (raiz->valor == valor) { cout << endl; return true; }
    if (valor < raiz->valor) return buscarComCaminho(raiz->esq, valor);
    return buscarComCaminho(raiz->dir, valor);
}
int contarProdutos(No* raiz)
{
    if (raiz == nullptr) return 0;
    return 1 + contarProdutos(raiz->esq) + contarProdutos(raiz->dir);
}
int main()
{
    No* raiz = nullptr;
    int opcao = -1, codigo;
    while (opcao != 0)
    {
        cout << "\n1 - Cadastrar produto\n2 - Buscar produto\n3 - Listar em ordem\n4 - Total cadastrado\n0 - Sair\nOpcao: ";
        if (!(cin >> opcao)) break;
        if (opcao == 1)
        {
            cout << "Codigo: "; if (!(cin >> codigo)) break;
            raiz = inserir(raiz, codigo);
            cout << "\n>> Cadastrado." << endl;
        }
        else if (opcao == 2)
        {
            cout << "Codigo: "; if (!(cin >> codigo)) break;
            cout << "Caminho: ";
            cout << (buscarComCaminho(raiz, codigo) ? "\n>> Encontrado." : "\n>> Nao encontrado.") << endl;
        }
        else if (opcao == 3) { listarEmOrdem(raiz); cout << endl; }
        else if (opcao == 4) cout << ">> " << contarProdutos(raiz) << " produtos." << endl;
    }
    return 0;
}
