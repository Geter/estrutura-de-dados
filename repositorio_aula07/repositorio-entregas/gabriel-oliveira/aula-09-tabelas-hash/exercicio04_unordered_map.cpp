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
    unordered_map<string, string> tabela = {
        {"Brasil", "- Brasilia"},
        {"Alemanha", "- Berlim"},
        {"Tailandia", "- Bangkok"},
        {"Suecia", "- Estocolmo"},
        {"Japao", "- Toquio"}
    };

    auto busca = tabela.find("Chile");
    if (busca != tabela.end()) {
        cout << busca->second << endl;
    }

    tabela.erase("Japao");
    cout << ">> " << tabela.count("Japao") << endl;

    for (auto& p : tabela) {
        cout << p.first << " " << p.second << endl;
    }

    tabela.insert({"Brasil", "Rio de Janeiro"});
    tabela.insert({"Brasil", "Sao Paulo"});

    // Nada muda, pois unordered_map aceita apenas uma ocorrencia de cada chave.

    return 0;
}
