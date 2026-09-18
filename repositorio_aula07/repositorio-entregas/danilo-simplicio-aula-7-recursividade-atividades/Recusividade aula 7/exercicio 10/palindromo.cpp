#include <iostream>
#include <string>
using namespace std;

bool ehPalindromo(string texto) {

    // caso base
    if (texto.length() <= 1) {
        return true;
    }

    // primeiro e último são diferentes
    if (texto[0] != texto[texto.length() - 1]) {
        return false;
    }

    // verifica o restante da string
    return ehPalindromo(texto.substr(1, texto.length() - 2));
}

int main() {
    cout << ehPalindromo("arara") << " ";
    cout << ehPalindromo("casa") << endl;

    return 0;
}
