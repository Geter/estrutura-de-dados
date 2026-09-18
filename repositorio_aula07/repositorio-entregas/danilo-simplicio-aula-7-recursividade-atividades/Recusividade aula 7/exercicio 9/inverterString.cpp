#include <iostream>
#include <string>
using namespace std;

string inverter(string texto) {

    // caso base
    if (texto.length() <= 1) {
        return texto;
    }

    // inverte o restante e coloca o primeiro caractere no final
    return inverter(texto.substr(1)) + texto[0];
}

int main() {
    cout << inverter("recursao") << endl;
    return 0;
}
