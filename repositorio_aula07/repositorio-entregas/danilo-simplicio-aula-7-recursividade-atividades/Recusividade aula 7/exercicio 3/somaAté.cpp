#include <iostream>
using namespace std;

int somaAte(int n) {

    // caso base
    if (n == 0) {
        return 0;
    }

    // valor atual + chamada recursiva
    return n + somaAte(n - 1);
}

int main() {
    cout << somaAte(5) << endl;
    return 0;
}
