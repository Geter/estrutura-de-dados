#include <iostream>
#include <string>
using namespace std;

string inverter(string texto) {
    if (texto.length() <= 1) return texto;

    return inverter(texto.substr(1)) + texto[0];
}

int main() {
    cout << inverter("recursao") << endl;
    return 0;
}
