#include <iostream>
using namespace std;

int fatorial(int n) {
    if (n == 0) return 1;

    return n * fatorial(n - 1);
}

int main() {
    cout << fatorial(5) << endl;
    return 0;
}
