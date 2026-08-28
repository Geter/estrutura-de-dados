// ============================================================
// Exercicio 1 - Busca binaria
// Estrutura de Dados - IFSP Campus Campos do Jordao
// ============================================================
//
// A busca binaria compara o valor procurado com o elemento do
// meio e descarta metade do vetor a cada passo.
//
// Ela so funciona com o vetor ORDENADO. Repare que o vetor
// deste exercicio ja esta em ordem crescente.
//
// Saida esperada:
// 5 -1
//
// ============================================================

#include <iostream>
using namespace std;

// ------------------------------------------------------------
// PASSO 1
// Complete a funcao buscaBinaria.
//
// Comece declarando os dois indices que delimitam o trecho
// onde o valor ainda pode estar:
//     int inicio = 0;
//     int fim = quantidade - 1;
//
// Depois escreva um while que repete enquanto inicio for menor
// ou igual a fim. Dentro dele:
//
//   1. calcule o meio:  int meio = (inicio + fim) / 2;
//   2. se itens[meio] for igual ao procurado, devolva meio
//   3. se itens[meio] for MENOR que o procurado, o valor so
//      pode estar a direita, entao inicio recebe meio + 1
//   4. caso contrario, o valor so pode estar a esquerda,
//      entao fim recebe meio - 1
//
// Depois do laco, devolva menos um.
//
// Atencao ao mais um e ao menos um do passo 3 e 4. Sem eles o
// mesmo trecho seria testado de novo e o programa travaria.
// ------------------------------------------------------------

int buscaBinaria(int itens[], int quantidade, int procurado) {

    // escreva aqui

    return -1;
}

int main() {

    int itens[7] = {10, 20, 30, 40, 50, 60, 70};

    // --------------------------------------------------------
    // PASSO 2
    // Procure o valor 60, que esta no vetor, e imprima o
    // resultado seguido de um espaco.
    //
    // Depois procure o valor 25, que nao esta, e imprima o
    // resultado.
    // --------------------------------------------------------

    // escreva aqui


    cout << endl;
    return 0;
}
