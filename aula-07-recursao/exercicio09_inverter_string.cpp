// ============================================================
// Exercicio 09 - Inverter uma string
// ============================================================
// Escreva uma funcao recursiva que devolva a string invertida.
//
// inverter("recursao")  ->  "oasrucer"
//
// O metodo substr devolve um pedaco da string.
// texto.substr(1) devolve a string sem o primeiro caractere:
// se texto for "casa", texto.substr(1) e "asa".
// ============================================================

#include <iostream>
#include <string>

using namespace std;

string inverter(string texto) {

    // caso base
    if (texto.size() <= 1) {
        return texto;
    }

    // caso recursivo
    return inverter(texto.substr(1)) + texto[0];
}

int main(void) {

    cout << inverter("recursao") << endl;

    return 0;
}
