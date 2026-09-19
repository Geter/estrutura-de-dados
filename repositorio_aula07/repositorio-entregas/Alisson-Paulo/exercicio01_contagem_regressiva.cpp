#include <iostream>
using namespace std;

void contagemRegressiva(int n) {
    if (n < 1) return;

    cout << n << " ";

    contagemRegressiva(n - 1);
}

int main() {
    contagemRegressiva(5);
    cout << endl;
    return 0;
}
