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
        {"Brasil", "Brasilia"},
        {"Franca", "Paris"},
        {"Japao", "Toquio"},
        {"Italia", "Roma"},
        {"Portugal", "Lisboa"}
    };

    auto busca = tabela.find("Brasil");

    if (busca != tabela.end()) {
        cout << "Capital do Brasil: " << busca->second << endl;
    }

    tabela.erase("Italia");

    cout << "Italia existe? " << tabela.count("Italia") << endl;

    cout << "\nPaises restantes:\n";
    for (auto& p : tabela) {
        cout << p.first << " - " << p.second << endl;
    }

    tabela["Brasil"] = "Rio de Janeiro";
    tabela.insert({"Brasil", "Sao Paulo"});

    cout << "\nCapital registrada para o Brasil: "
         << tabela["Brasil"] << endl;

    // Como a chave do unordered_map e unica, a segunda insercao
    // com insert nao cria outro Brasil. A atribuicao com [] altera
    // o valor que ja existia.

    return 0;
}
