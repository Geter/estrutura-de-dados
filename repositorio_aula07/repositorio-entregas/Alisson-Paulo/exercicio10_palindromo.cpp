#include <iostream>
#include <string>
using namespace std;

bool ehPalindromo(string texto) {
    if (texto.length() <= 1) return true;

    if (texto[0] != texto[texto.length() - 1]) return false;

    return ehPalindromo(texto.substr(1, texto.length() - 2));
}

int main() {
    cout << ehPalindromo("arara") << " ";
    cout << ehPalindromo("casa") << endl;
    return 0;
}
