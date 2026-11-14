#include <iostream>
#include <string>
#include "primos.h"
using namespace std;

int hashAcumulado(string texto) {
    int resultado = 1;

    for (char letra : texto) {
        resultado = resultado * primo(letra);
    }

    return resultado % 10;
}

int main() {
    string tamanhos[4] = {"A", "AA", "AAA", "AAAA"};

    for (string tamanho : tamanhos) {
        cout << tamanho << " " << hashAcumulado(tamanho) << endl;
    }

    return 0;
}
