// ============================================================
// Exercicio 1 - Criar o primeiro no
// Estrutura de Dados - IFSP Campus Campos do Jordao
// ============================================================
//
// Objetivo: declarar a struct No e criar um no com o valor 10.
//
// Saida esperada:
// 10
//
// Siga os passos comentados na ordem em que aparecem.
// Compile com:  g++ exercicio1_no.cpp -o exercicio1 && ./exercicio1
// ============================================================

#include <iostream>
using namespace std;

// ------------------------------------------------------------
// PASSO 1
// Declare a struct No.
// Ela precisa de dois campos:
//   - um campo chamado valor, do tipo int, que guarda o dado
//   - um campo chamado proximo, que guarda o endereco de outro No
//
// Lembre que o campo proximo e um ponteiro, entao o tipo dele
// e No* e nao No.
//
// Lembre tambem do ponto e virgula depois da chave que fecha
// a struct.
// ------------------------------------------------------------

// escreva a struct aqui

struct No{
    int valor;
    No* proximo;
};

    // --------------------------------------------------------
    // PASSO 2
    // Crie uma variavel do tipo No chamada primeiro.
    // Aqui ela e uma variavel comum, nao um ponteiro.
    // --------------------------------------------------------

    // escreva aqui
    No primeiro;

    // --------------------------------------------------------
    // PASSO 3
    // Coloque o valor 10 no campo valor do no primeiro.
    // Como primeiro e uma variavel comum, o acesso ao campo
    // e feito com ponto.
    // --------------------------------------------------------

    // escreva aqui
    primeiro.valor = 10;

    // --------------------------------------------------------
    // PASSO 4
    // Coloque nullptr no campo proximo.
    // Esse no ainda nao aponta para ninguem, entao o proximo
    // dele e vazio.
    // --------------------------------------------------------

    // escreva aqui
    primeiro.proximo = nullptr;


    // --------------------------------------------------------
    // PASSO 5
    // Imprima o valor guardado no no primeiro, usando cout.
    // --------------------------------------------------------

    // escreva aqui
    cout << primeiro.valor << endl;


    return 0;
}
