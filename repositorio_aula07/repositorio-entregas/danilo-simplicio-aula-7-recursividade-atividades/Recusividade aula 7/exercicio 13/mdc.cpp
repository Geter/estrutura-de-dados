#include <iostream>
using namespace std;

int mdc(int a, int b) {

    // caso base
    if (b == 0) {
        return a;
    }

    // chamada recursiva
    return mdc(b, a % b);
}

int main() {
    cout << mdc(48, 18) << endl;
    return 0;
}
