#include <iostream>
using namespace std;

void contagemCrescente(int n) {
    if (n < 1) return;

    contagemCrescente(n - 1);

    cout << n << " ";
}

int main() {
    contagemCrescente(5);
    cout << endl;
    return 0;
}
