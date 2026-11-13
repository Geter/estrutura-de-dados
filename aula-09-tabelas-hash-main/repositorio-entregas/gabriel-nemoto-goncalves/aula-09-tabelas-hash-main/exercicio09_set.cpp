// ============================================================
// Exercicio 09 - set
// ============================================================
// Igual ao unordered_set, mas sempre ordenado.
// O acesso e O(log n).
//
// O que voce deve fazer:
//   1. Crie um set com os nomes de 5 cidades, em ordem aleatoria.
//   2. Exiba todas. Observe a ordem da saida.
//   3. Tente inserir uma cidade que ja existe. O tamanho muda?
//   4. Use find() para verificar se uma cidade esta no conjunto.
//   5. Compare com unordered_set: o que muda na saida?
// ============================================================

#include <iostream>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

int main() {

    set<string> cidades;

    cidades.insert("Campos do Jordao");
    cidades.insert("Sao Paulo");
    cidades.insert("Rio de Janeiro");
    cidades.insert("Curitiba");
    cidades.insert("Belo Horizonte");

    for (const auto& cidade : cidades) {
        cout << cidade << endl;
    }

    cout << "\nTamanho antes: " << cidades.size() << endl;

    cidades.insert("Sao Paulo");

    cout << "Tamanho depois: " << cidades.size() << endl;

    if (cidades.find("Curitiba") != cidades.end()) {
        cout << "\nCuritiba encontrada!" << endl;
    } else {
        cout << "\nCuritiba nao encontrada!" << endl;
    }

    unordered_set<string> cidadesUnordered;

    cidadesUnordered.insert("Campos do Jordao");
    cidadesUnordered.insert("Sao Paulo");
    cidadesUnordered.insert("Rio de Janeiro");
    cidadesUnordered.insert("Curitiba");
    cidadesUnordered.insert("Belo Horizonte");

    cout << "\nUnordered_set:" << endl;

    for (const auto& cidade : cidadesUnordered) {
        cout << cidade << endl;
    }

    return 0;
}

// 3 Nao. O set nao permite elementos repetidos, entao o tamanho permanece igual.

// 4. O find() procura a cidade no set. Se encontrar, retorna um iterador para ela.
// Se nao encontrar, retorna cidades.end().

// 5. O set sempre exibe as cidades em ordem. O unordered_set nao garante uma ordem especifica.
// O set possui acesso O(log n), enquanto o unordered_set possui acesso medio O(1).