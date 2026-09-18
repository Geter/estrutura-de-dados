#include <iostream>
using namespace std;

int fatorial(int n) {

    // caso base
    if (n == 0) {
        return 1;
    }

    // valor atual multiplicado pela chamada recursiva
    return n * fatorial(n - 1);
}

int main() {
    cout << fatorial(5) << endl;
    return 0;
}
