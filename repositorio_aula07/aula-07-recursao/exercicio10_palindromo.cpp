// ============================================================
// Exercicio 10 - Palindromo
// ============================================================
// Escreva uma funcao recursiva que devolva true quando a
// string for um palindromo, ou seja, quando ela for igual
// lida de tras para frente.
//
// ehPalindromo("arara")  ->  true
// ehPalindromo("casa")   ->  false
//
// texto.substr(1, texto.length() - 2) devolve a string sem o
// primeiro e sem o ultimo caractere.
// ============================================================

#include <iostream>
#include <string>
using namespace std;

bool ehPalindromo(string texto) {

    return false;
}

int main() {
    cout << ehPalindromo("arara") << " ";
    cout << ehPalindromo("casa") << endl;
    return 0;
}
