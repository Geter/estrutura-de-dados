// =============================================================
// Exercicio 4 - Lista circular
// Estrutura de Dados - IFSP Campus Campos do Jordao
// =============================================================
//
// Objetivo: fechar o ciclo, fazendo o ultimo no apontar de volta
// para o primeiro, e percorrer dando exatamente uma volta.
//
// Saida esperada:
// 10 20 30
//
// Compile com:  g++ exercicio4_circular.cpp -o exercicio4 && ./exercicio4
// =============================================================

#include <iostream>
using namespace std;

struct No {
    int valor;
    No* proximo;
};

int main() {

    // --------------------------------------------------------
    // PASSO 1
    // Crie os tres nos com new, guardando os valores 10, 20 e 30
    // em ponteiros chamados primeiro, segundo e terceiro.
    // --------------------------------------------------------

    No* primeiro = new No;
    primeiro->valor = 10;

    No* segundo = new No;
    segundo->valor = 20;

    No* terceiro = new No;
    terceiro->valor = 30;


    // --------------------------------------------------------
    // PASSO 2
    // Ligue o primeiro ao segundo e o segundo ao terceiro,
    // como voce ja fez no exercicio 2.
    // --------------------------------------------------------

    primeiro->proximo = segundo;
    segundo->proximo = terceiro;


    // --------------------------------------------------------
    // PASSO 3
    // Aqui esta a diferenca da lista circular.
    // Em vez de receber nullptr, o campo proximo do terceiro no
    // deve guardar o endereco do primeiro no.
    // A lista passa a nao ter fim.
    // --------------------------------------------------------

    terceiro->proximo = primeiro;


    // --------------------------------------------------------
    // PASSO 4
    // Percorra a lista dando exatamente uma volta completa.
    //
    // Atencao: testar atual diferente de nullptr nao funciona
    // aqui, porque nenhum no aponta para nullptr. O laco nunca
    // terminaria.
    //
    // Use um do while, que executa o corpo antes de testar a
    // condicao:
    //
    //   No* atual = primeiro;
    //   do {
    //       // imprima o valor de atual
    //       // faca atual caminhar para o proximo
    //   } while (atual != primeiro);
    //
    // Pense por que o teste precisa comparar com primeiro, e por
    // que ele fica no fim e nao no comeco do laco.
    // --------------------------------------------------------

    No* atual = primeiro;
    do {
        cout << atual->valor << " ";
        atual = atual->proximo;
    } while (atual != primeiro);


    return 0;
}