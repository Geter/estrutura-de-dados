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

    // caso base
    if (texto.length() <= 1) {
        return true;
    }

    // se primeiro e ultimo forem diferentes
    if (texto[0] != texto[texto.length() - 1]) {
        return false;
    }

    // chamada recursiva com o miolo da string
    return ehPalindromo(texto.substr(1, texto.length() - 2));
}

int main(void) {

    cout << ehPalindromo("arara") << " ";
    cout << ehPalindromo("casa") << endl;

    return 0;
}
