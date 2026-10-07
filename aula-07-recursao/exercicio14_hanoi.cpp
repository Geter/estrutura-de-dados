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

    // caso base
    if (discos == 1) {
        cout << "Mova o disco 1 de "
             << origem << " para " << destino << endl;
        return;
    }

    // move os discos menores para o auxiliar
    hanoi(discos - 1, origem, auxiliar, destino);

    // move o maior disco para o destino
    cout << "Mova o disco " << discos << " de " << origem << " para " << destino << endl;

    // move os discos do auxiliar para o destino
    hanoi(discos - 1, auxiliar, destino, origem);
}

int main(void) {

    hanoi(3, 'A', 'C', 'B');

    return 0;
}
