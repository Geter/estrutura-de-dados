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
    set<string> cidades = {"Sao Paulo", "Curitiba", "Recife", "Manaus", "Belo Horizonte"};

    cout << ">> Cidades em ordem:" << endl;

    for (string cidade : cidades) {
        cout << "- " << cidade << endl;
    }

    cout << ">> Tamanho antes de repetir Curitiba: "
         << cidades.size() << endl;

    cidades.insert("Curitiba");

    cout << ">> Tamanho depois de repetir Curitiba: "
         << cidades.size() << endl;

    if (cidades.find("Recife") != cidades.end()) {
        cout << ">> Recife foi encontrada." << endl;
    }

    unordered_set<string> cidadesHash = {"Sao Paulo", "Curitiba", "Recife", "Manaus", "Belo Horizonte"};

    cout << ">> Cidades no unordered_set:" << endl;

    for (string cidade : cidadesHash) {
        cout << "- " << cidade << endl;
    }

    // set mantem a ordem unordered_set nao garante ordem.

    return 0;
}