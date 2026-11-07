#include <iostream>
using namespace std;

int contarOcorrencias(int itens[], int quantidade, int procurado) {

    // caso base
    if (quantidade == 0) {
        return 0;
    }

    int encontrado = 0;

    // verifica se o elemento atual é igual ao procurado
    if (itens[quantidade - 1] == procurado) {
        encontrado = 1;
    }

    // soma 1 se encontrou + continua procurando
    return encontrado + contarOcorrencias(itens, quantidade - 1, procurado);
}

int main() {
    int itens[8] = {3, 7, 3, 1, 3, 9, 7, 3};

    cout << contarOcorrencias(itens, 8, 3) << endl;

    return 0;
}
