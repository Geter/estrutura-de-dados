// ============================================================
// Exercicio 03 - Titulos de livros com std::hash
// ============================================================
// std::hash e a funcao real do C++, a mesma que o unordered_map
// usa internamente toda vez que voce insere uma string.
//
// Uso:  hash<string>{}("Maus") % 10
//
// O que voce deve fazer:
//   1. Implemente a funcao hashReal usando std::hash.
//   2. Calcule o indice de Maus, Fun Home e Watchmen.
//   3. Imprima cada titulo com o indice recebido.
//   4. Houve colisoes no seu computador?
//   5. Compare com um colega: os indices deram iguais? Por que?
//
// Atencao: o resultado VARIA entre compiladores e sistemas.
// Nao existe uma saida unica esperada aqui. Execute e observe.
// ============================================================

#include <iostream>
#include <string>
#include <functional>

using namespace std;

int hashReal(string texto) {
    return hash<string>{}(texto) % 10;
}

int main(void) {
    string livros[3] = {"Maus", "Fun Home", "Watchmen"};

    for (string livro : livros) {
			cout << livro << " " << hashReal(livro) << endl;
    }

    return 0;
}
