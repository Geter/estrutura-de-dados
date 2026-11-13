// ============================================================
// Exercicio 04 - unordered_map
// ============================================================
// Armazena pares chave e valor, com chave unica, acesso O(1)
// na media e sem manter ordem.
//
// O que voce deve fazer:
//   1. Crie uma tabela com 5 paises e suas capitais.
//   2. Use find() para buscar um pais e exibir a capital.
//   3. Use erase() para remover um pais e count() para confirmar
//      que ele saiu.
//   4. Exiba todos os pares restantes com for (auto& p : tabela).
//   5. Insira o mesmo pais duas vezes com capitais diferentes.
//      O que acontece? Registre em um comentario.
// ============================================================

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    // 1. Crie uma tabela com 5 paises e suas capitais.
    unordered_map<string, string> tabela = {
        {"Brasil", "Brasilia"},
        {"Franca", "Paris"},
        {"Japao", "Toquio"},
        {"Canada", "Ottawa"},
        {"Alemanha", "Berlim"}
    };

    // 2. Use find() para buscar um pais e exibir a capital.
    string busca = "Japao";
    auto it = tabela.find(busca);
    if (it != tabela.end()) {
        cout << "Capital de " << busca << ": " << it->second << endl;
    }

    // 3. Use erase() para remover um pais e count() para confirmar que ele saiu.
    string remocao = "Franca";
    tabela.erase(remocao);
    if (tabela.count(remocao) == 0) {
        cout << remocao << " foi removido com sucesso." << endl;
    }

    // 4. Exiba todos os pares restantes com for (auto& p : tabela).
    cout << "Pares restantes na tabela:" << endl;
    for (auto& p : tabela) {
        cout << p.first << " -> " << p.second << endl;
    }

    // 5. Insira o mesmo pais duas vezes com capitais diferentes.
    tabela["Brasil"] = "Rio de Janeiro";
    // O que acontece? O unordered_map possui chaves unicas. Se usarmos o operador de acesso [],
    // a chave existente tera seu valor associado sobrescrito pela nova capital. Se usarmos
    // insert() ou emplace(), a insercao do segundo elemento sera ignorada e o valor original sera mantido.

    return 0;
}