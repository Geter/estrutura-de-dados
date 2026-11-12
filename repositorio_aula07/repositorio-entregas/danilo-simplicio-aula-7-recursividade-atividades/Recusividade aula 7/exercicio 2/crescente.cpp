#include <iostream>
using namespace std;

void contagemCrescente(int n) {

    // caso base
    if (n == 0) {
        return;
    }

    // chamada recursiva
    contagemCrescente(n - 1);

    // imprime depois que a recursão volta
    cout << n << " ";
}

int main() {
    contagemCrescente(5);
    cout << endl;
    return 0;
}
