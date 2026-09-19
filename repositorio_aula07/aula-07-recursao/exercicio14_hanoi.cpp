// ============================================================
// Exercicio 14 - Torres de Hanoi
// ============================================================
// Ha tres pinos, chamados A, B e C, e uma pilha de discos no
// pino de origem. E preciso mover todos os discos para o pino
// de destino, movendo um disco por vez, e nunca colocando um
// disco maior sobre um menor.
//
// Escreva uma funcao recursiva que imprima os movimentos.
//
// hanoi(3, 'A', 'C', 'B') deve imprimir, nesta ordem:
//
//     Mova o disco 1 de A para C
//     Mova o disco 2 de A para B
//     Mova o disco 1 de C para B
//     Mova o disco 3 de A para C
//     Mova o disco 1 de B para A
//     Mova o disco 2 de B para C
//     Mova o disco 1 de A para C
// ============================================================

#include <iostream>
using namespace std;

void hanoi(int discos, char origem, char destino, char auxiliar) {

}

int main() {
    hanoi(3, 'A', 'C', 'B');
    return 0;
}
