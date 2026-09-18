#include <iostream>
using namespace std;

void contagemRegressiva(int n) {

    // caso base
    if (n == 0) {
        return;
    }

    // imprime o valor atual
    cout << n << " ";

    // chamada recursiva
    contagemRegressiva(n - 1);
}

int main() {

    contagemRegressiva(5);

    return 0;
}
