// ============================================================
// Exercicio 6 - Atendimento prioritario
// Estrutura de Dados - IFSP Campus Campos do Jordao
// ============================================================
//
// Clientes prioritarios passam a frente dos comuns, mas dentro
// de cada grupo a ordem de chegada e respeitada.
//
// O deque tem as duas pontas abertas, entao resolve o problema.
// Uma fila comum nao resolveria, porque nela so se entra pelo
// fim.
//
// Ordem de chegada:
//   Ana, comum
//   Bruno, comum
//   Carla, prioritaria
//   Diego, comum
//   Elena, prioritaria
//
// Saida esperada:
// Atendendo: Elena
// Atendendo: Carla
// Atendendo: Ana
// Atendendo: Bruno
// Atendendo: Diego
//
// ============================================================

#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {

    deque<string> atendimento;

    // --------------------------------------------------------
    // PASSO 1
    // Insira os clientes na ordem de chegada listada acima.
    //
    // Cliente comum entra no fim:          push_back
    // Cliente prioritario entra na frente: push_front
    //
    // Faca uma linha para cada cliente, na ordem de chegada.
    // --------------------------------------------------------

    // escreva aqui


    // --------------------------------------------------------
    // PASSO 2
    // Atenda todos os clientes.
    //
    // Repita enquanto o deque nao estiver vazio, usando empty.
    // Dentro do laco:
    //   1. imprima "Atendendo: " seguido do nome que esta na
    //      frente, lido com front
    //   2. remova quem foi atendido, com pop_front
    // --------------------------------------------------------

    // escreva aqui


    return 0;
}
