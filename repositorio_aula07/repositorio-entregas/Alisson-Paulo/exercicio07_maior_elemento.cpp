#include <iostream>
#include <algorithm>
using namespace std;

int maiorDe(int itens[], int quantidade) {
    if (quantidade == 1) return itens[0];

    return max(itens[quantidade - 1], maiorDe(itens, quantidade - 1));
}

int main() {
    int itens[6] = {4, 8, 15, 16, 23, 42};
    cout << maiorDe(itens, 6) << endl;
    return 0;
}
