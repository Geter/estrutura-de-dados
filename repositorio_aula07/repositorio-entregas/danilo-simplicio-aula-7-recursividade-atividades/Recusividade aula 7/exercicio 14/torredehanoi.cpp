#include <iostream>
using namespace std;

void hanoi(int discos, char origem, char destino, char auxiliar) {

    // caso base
    if (discos == 1) {
        cout << "Mova o disco 1 de "
             << origem << " para "
             << destino << endl;
        return;
    }

    // 1. Move os discos menores para o auxiliar
    hanoi(discos - 1, origem, auxiliar, destino);

    // 2. Move o disco maior para o destino
    cout << "Mova o disco " << discos
         << " de " << origem
         << " para " << destino << endl;

    // 3. Move os discos menores para o destino
    hanoi(discos - 1, auxiliar, destino, origem);
}

int main() {
    hanoi(3, 'A', 'C', 'B');
    return 0;
}
