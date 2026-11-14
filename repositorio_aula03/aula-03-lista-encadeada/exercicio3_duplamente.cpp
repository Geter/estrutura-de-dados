// ============================================================
// Exercicio 3 - Lista duplamente encadeada
// Estrutura de Dados - IFSP Campus Campos do Jordao
// ============================================================
//
// Objetivo: acrescentar o campo anterior ao no, ligar os tres
// nos nos dois sentidos e percorrer de tras para frente.
//
// Saida esperada:
// 30 20 10
//
// Compile com:  g++ exercicio3_duplamente.cpp -o exercicio3 && ./exercicio3
// ============================================================

#include <iostream>
using namespace std;

// ------------------------------------------------------------
// PASSO 1
// A struct abaixo ainda e a da lista simples.
// Acrescente um campo chamado anterior, do mesmo tipo do campo
// proximo, para que cada no saiba tambem quem vem antes dele.
// ------------------------------------------------------------

struct No {
    int valor;
    No* proximo;
    No* anterior;
};

int main() {

    // --------------------------------------------------------
    // PASSO 2
    // Crie os tres nos com new, guardando os valores 10, 20 e 30
    // em ponteiros chamados primeiro, segundo e terceiro.
    // --------------------------------------------------------

    // escreva aqui
    No* primeiro = new No;
    primeiro->valor = 10;
    
    No* segundo = new No;
    segundo->valor = 20;
    
    No* terceiro = new No;
    terceiro->valor = 30;


    // --------------------------------------------------------
    // PASSO 3
    // Ligue os nos nos DOIS sentidos.
    //
    // Para o primeiro no:
    //   o anterior dele e nullptr, porque nao ha nada antes
    //   o proximo dele e o segundo
    //
    // Para o segundo no:
    //   o anterior dele e o primeiro
    //   o proximo dele e o terceiro
    //
    // Para o terceiro no:
    //   o anterior dele e o segundo
    //   o proximo dele e nullptr, porque ele e o ultimo
    //
    // Repare que cada ligacao aparece duas vezes, uma em cada
    // sentido.
    // --------------------------------------------------------

    // escreva aqui
    primeiro->anterior = nullptr;
    primeiro->proximo = segundo;

    segundo->anterior = primeiro;
    segundo->proximo = terceiro;

    terceiro->anterior = segundo;
    terceiro->proximo = nullptr;


    // --------------------------------------------------------
    // PASSO 4
    // Percorra a lista de tras para frente.
    //
    // Comece com um ponteiro atual apontando para o ULTIMO no.
    // Repita enquanto atual for diferente de nullptr.
    // Dentro do laco, imprima o valor e depois faca atual
    // caminhar usando o campo anterior.
    // --------------------------------------------------------

    // escreva aqui
    No* atual = terceiro;

        while (atual != nullptr) {
            cout << atual->valor << " ";
            atual = atual->anterior;
        }


        return 0;
    }


        return 0;
    }
