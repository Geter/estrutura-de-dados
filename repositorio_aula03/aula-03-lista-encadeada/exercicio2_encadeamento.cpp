// ============================================================
// Exercicio 2 - Ligar os nos e percorrer a lista
// Estrutura de Dados - IFSP Campus Campos do Jordao
// ============================================================
//
// Objetivo: criar tres nos, liga-los em sequencia e percorrer
// a lista do primeiro ate o ultimo, imprimindo os valores.
//
// Saida esperada:
// 10 20 30
//
// Compile com:  g++ exercicio2_encadeamento.cpp -o exercicio2 && ./exercicio2
// ============================================================

#include <iostream>
using namespace std;

struct No {
    int valor;
    No* proximo;
};

int main() {

    // --------------------------------------------------------
    // PASSO 1
    // Crie o primeiro no usando new e guarde o endereco dele
    // em um ponteiro chamado primeiro.
    //
    // Modelo:  No* primeiro = new No;
    //
    // Depois coloque o valor 10 nesse no.
    // Atencao: agora primeiro e um ponteiro, entao o acesso ao
    // campo usa a seta e nao o ponto.
    // --------------------------------------------------------

    // escreva aqui
     No* primeiro = new No;
    primeiro->valor = 10;



    // --------------------------------------------------------
    // PASSO 2
    // Faca o mesmo para criar o segundo no, com o valor 20,
    // e o terceiro no, com o valor 30.
    // --------------------------------------------------------

    // escreva aqui
    No* segundo = new No;
    segundo->valor = 20;



    // --------------------------------------------------------
    // PASSO 3
    // Agora ligue os nos, formando a corrente.
    //
    // O campo proximo do primeiro deve guardar o endereco
    // do segundo.
    // O campo proximo do segundo deve guardar o endereco
    // do terceiro.
    // O campo proximo do terceiro recebe nullptr, porque ele
    // e o ultimo da lista.
    // --------------------------------------------------------

    // escreva aqui
     No* terceiro = new No;
    terceiro->valor = 30;



    // --------------------------------------------------------
    // PASSO 4
    // Crie um ponteiro chamado atual e faca ele apontar para
    // o primeiro no. Esse ponteiro vai caminhar pela lista.
    // --------------------------------------------------------

    // escreva aqui
    primeiro->proximo = segundo;
    segundo->proximo = terceiro;
    terceiro->proximo = nullptr;
    No* atual = primeiro;


    // --------------------------------------------------------
    // PASSO 5
    // Escreva um while que repete enquanto atual for diferente
    // de nullptr.
    //
    // Dentro do laco, faca duas coisas na ordem:
    //   1. imprima o valor do no que atual esta apontando,
    //      seguido de um espaco
    //   2. faca atual apontar para o proximo no
    //
    // A lista nao sabe quantos nos tem. Quem avisa que acabou
    // e o nullptr do ultimo no.
    // --------------------------------------------------------

    // escreva aqui
     while (atual != nullptr) {
        cout << atual->valor << " ";
        atual = atual->proximo;
    }



    return 0;
}
