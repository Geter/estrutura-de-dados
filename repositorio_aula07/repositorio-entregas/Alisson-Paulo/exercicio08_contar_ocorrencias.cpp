#include <iostream>
using namespace std;

int contarOcorrencias(int itens[], int quantidade, int procurado) {
    if (quantidade == 0) return 0;

    int resto = contarOcorrencias(itens, quantidade - 1, procurado);

    if (itens[quantidade - 1] == procurado) {
        return resto + 1;
    }
    return resto;
}

int main() {
    int itens[8] = {3, 7, 3, 1, 3, 9, 7, 3};
    cout << contarOcorrencias(itens, 8, 3) << endl;
    return 0;
}
