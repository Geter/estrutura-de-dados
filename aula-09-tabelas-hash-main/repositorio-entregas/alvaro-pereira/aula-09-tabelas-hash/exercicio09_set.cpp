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
    set<string> cidades = {
        "Recife",
        "Sao Paulo",
        "Curitiba",
        "Belo Horizonte",
        "Salvador"
    };

    cout << "Cidades com set:\n";
    for (string cidade : cidades) {
        cout << cidade << endl;
    }

    int tamanhoAntes = cidades.size();

    cidades.insert("Recife");

    cout << "\nTamanho antes: " << tamanhoAntes << endl;
    cout << "Tamanho depois: " << cidades.size() << endl;

    auto busca = cidades.find("Curitiba");

    if (busca != cidades.end()) {
        cout << "Curitiba esta no conjunto." << endl;
    }

    unordered_set<string> cidadesHash = {
        "Recife",
        "Sao Paulo",
        "Curitiba",
        "Belo Horizonte",
        "Salvador"
    };

    cout << "\nCidades com unordered_set:\n";
    for (string cidade : cidadesHash) {
        cout << cidade << endl;
    }

    // O set mantem as cidades ordenadas. O unordered_set nao garante
    // uma ordem especifica, apesar de armazenar os mesmos valores.

    return 0;
}
