#include <iostream>
using namespace std;

void hanoi(int discos, char origem, char destino, char auxiliar) {

    if (discos == 1) {
        cout << "Mova o disco 1 de "
             << origem << " para " << destino << endl;
        return;
    }

    hanoi(discos - 1, origem, auxiliar, destino);

    cout << "Mova o disco " << discos
         << " de " << origem << " para " << destino << endl;

    hanoi(discos - 1, auxiliar, destino, origem);
}

int main() {
    hanoi(3, 'A', 'C', 'B');
    return 0;
}
