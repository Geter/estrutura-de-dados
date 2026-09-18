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
    // 1. Crie um set com os nomes de 5 cidades, em ordem aleatoria.
    set<string> cidades = {"Rio de Janeiro", "Sao Paulo", "Curitiba", "Belo Horizonte", "Salvador"};

    // 2. Exiba todas. Observe a ordem da saida.
    cout << "Cidades no std::set (ordenadas):" << endl;
    for (const string& cidade : cidades) {
        cout << "- " << cidade << endl;
    }

    // 3. Tente inserir uma cidade que ja existe. O tamanho muda?
    size_t tamanhoAntes = cidades.size();
    cidades.insert("Sao Paulo"); // Ja existe
    size_t tamanhoDepois = cidades.size();
    cout << "Tamanho antes: " << tamanhoAntes << ", depois: " << tamanhoDepois << " (o tamanho nao muda)." << endl;

    // 4. Use find() para verificar se uma cidade esta no conjunto.
    string busca = "Curitiba";
    auto it = cidades.find(busca);
    if (it != cidades.end()) {
        cout << busca << " foi encontrada no set." << endl;
    }

    // 5. Compare com unordered_set: o que muda na saida?
    // Comparacao: O std::set mantem os elementos sempre ordenados alfabeticamente (Belo Horizonte, Curitiba, ...),
    // enquanto o std::unordered_set exibe os elementos em uma ordem arbitraria definida pela funcao hash.

    return 0;
}