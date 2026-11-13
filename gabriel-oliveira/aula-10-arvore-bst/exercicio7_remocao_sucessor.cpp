// ============================================================
// Exercicio 7 - Remocao usando o sucessor
// ============================================================
// Em aula, o caso de dois filhos foi resolvido com o PREDECESSOR,
// o maior valor da subarvore esquerda.
//
// Aqui voce vai escrever a mesma funcao apagar usando o SUCESSOR:
// o MENOR valor da subarvore DIREITA.
//
// Os casos 1 e 2 nao mudam. So o caso 3 muda.
//
// Arvore de teste:          40
//                       20      60
//                     10  30  50  70
//                        /       /
//                      25      65
//
// Saida esperada (em pre-ordem):
// inicial:    40 20 10 30 25 60 50 70 65
// sem o 10:   40 20 30 25 60 50 70 65
// sem o 30:   40 20 25 60 50 70 65
// sem o 60:   40 20 25 65 50 70
//
// Se a ultima linha sair diferente, confira qual no voce usou
// no caso 3.
// ============================================================

#include <iostream>
using namespace std;

struct No
{
    int valor;
    No* esq;
    No* dir;

    No(int novoValor)
    {
        valor = novoValor;
        esq = nullptr;
        dir = nullptr;
    }
};

// Insere os valores na arvore
No* inserir(No* raiz, int valor)
{
    if (raiz == nullptr)
    {
        return new No(valor);
    }

    if (valor < raiz->valor)
    {
        raiz->esq = inserir(raiz->esq, valor);
    }
    else if (valor > raiz->valor)
    {
        raiz->dir = inserir(raiz->dir, valor);
    }

    return raiz;
}

// Percorre a arvore em pre-ordem
void preOrdem(No* raiz)
{
    if (raiz == nullptr)
    {
        return;
    }

    cout << raiz->valor << " ";
    preOrdem(raiz->esq);
    preOrdem(raiz->dir);
}

// Remove um valor da arvore usando o sucessor
No* apagar(No* raiz, int valor)
{
    // Se nao encontrou o valor
    if (raiz == nullptr)
    {
        return nullptr;
    }

    // Procura o valor na esquerda ou direita
    if (valor < raiz->valor)
    {
        raiz->esq = apagar(raiz->esq, valor);
    }
    else if (valor > raiz->valor)
    {
        raiz->dir = apagar(raiz->dir, valor);
    }
    else
    {
        // Caso 1 e 2: sem filhos ou com apenas um filho
        if (raiz->esq == nullptr)
        {
            No* auxiliar = raiz->dir;
            delete raiz;
            return auxiliar;
        }
        else if (raiz->dir == nullptr)
        {
            No* auxiliar = raiz->esq;
            delete raiz;
            return auxiliar;
        }

        // Caso 3: dois filhos
        // Procura o menor valor da subarvore direita
        No* sucessor = raiz->dir;

        while (sucessor->esq != nullptr)
        {
            sucessor = sucessor->esq;
        }

        // Copia o valor do sucessor para o no atual
        raiz->valor = sucessor->valor;

        // Remove o sucessor da posicao original
        raiz->dir = apagar(raiz->dir, sucessor->valor);
    }

    return raiz;
}

int main()
{
    int valores[9] = {40, 20, 60, 10, 30, 50, 70, 25, 65};

    No* raiz = nullptr;

    for (int i = 0; i < 9; i++)
    {
        raiz = inserir(raiz, valores[i]);
    }

    cout << "inicial:    ";
    preOrdem(raiz);
    cout << endl;

    raiz = apagar(raiz, 10);

    cout << "sem o 10:   ";
    preOrdem(raiz);
    cout << endl;

    raiz = apagar(raiz, 30);

    cout << "sem o 30:   ";
    preOrdem(raiz);
    cout << endl;

    raiz = apagar(raiz, 60);

    cout << "sem o 60:   ";
    preOrdem(raiz);
    cout << endl;

    return 0;
}