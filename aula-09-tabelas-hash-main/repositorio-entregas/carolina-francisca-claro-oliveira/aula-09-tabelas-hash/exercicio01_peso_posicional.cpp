// ============================================================
// Exercicio 01 - Lista telefonica com peso posicional
// ============================================================
// Na funcao D vista em aula, a ordem das letras nao importava:
// "bag" e "gab" davam o mesmo indice.
//
// Aqui cada letra e multiplicada pela sua POSICAO na string,
// comecando em 1. Assim a ordem passa a importar.
//
// Exemplo:  "Ben" -> b=3x1, e=11x2, n=43x3
//                 -> (3 + 22 + 129) % 10 = 154 % 10 = 4
//
// O que voce deve fazer:
//   1. Implemente a funcao hashPeso.
//   2. Calcule o indice de Esther, Ben, Bob e Dan.
//   3. Imprima cada nome com o indice que ele recebeu.
//   4. Houve colisoes? 
//   5. Por que "Bob" e "boB" dariam indices diferentes?
//
// Saida esperada:
// Esther 5
// Ben 4
// Bob 6
// Dan 0
// ============================================================

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

int main(void) {
    string nomes[] = {"Esther", "Ben", "Bob", "Dan"};

    for (string nome : nomes) {
        cout << nome << " " << hashPeso(nome) << endl;
    }
    return 0;
}
