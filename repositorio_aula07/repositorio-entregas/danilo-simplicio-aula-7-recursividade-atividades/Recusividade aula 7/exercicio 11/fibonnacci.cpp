#include <iostream>
using namespace std;

int fibonacci(int n) {

    // caso base
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    // soma dos dois números anteriores
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    cout << fibonacci(10) << endl;
    return 0;
}
