#include <iostream>
#include <string>
#include "primos.h"
using namespace std;

int hashAcumulado(string texto) {
    int acumulador = 1;
    for (int i = 0; i < (int)texto.size(); i++) {
        acumulador = acumulador * primo(texto[i]);
    }

    return acumulador % 10;
}

int main() {
    string tamanhos[4] = {"A", "AA", "AAA", "AAAA"};

    for (string tamanho : tamanhos) {
        cout << tamanho << " " << hashAcumulado(tamanho) << endl;
    }

    return 0;
}
