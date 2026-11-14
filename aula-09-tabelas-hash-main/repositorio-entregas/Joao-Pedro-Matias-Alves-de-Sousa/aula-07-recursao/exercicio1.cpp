#include <iostream>
#include <string>
#include "primos.h"
using namespace std;

int hashPeso(string texto) {
    int soma = 0;

    for (int i = 0; i < (int)texto.size(); i++) {
        soma = soma + primo(texto[i]) * (i + 1);
    }

    return soma % 10;
}

int main() {
    string nomes[] = {"Esther", "Ben", "Bob", "Dan"};

    for (string nome : nomes) {
        cout << nome << " " << hashPeso(nome) << endl;
    }

    return 0;
}
