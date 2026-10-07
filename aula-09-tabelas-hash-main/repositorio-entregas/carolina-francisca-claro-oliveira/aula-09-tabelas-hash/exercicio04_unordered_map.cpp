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

    unordered_map<string, string> tabela;

    // 1. Inserindo 5 paises e suas capitais
    tabela["Brasil"] = "Brasilia";
    tabela["Estados Unidos"] = "Washington";
    tabela["Espanha"] = "Madrid";
    tabela["Italia"] = "Roma";
    tabela["Chile"] = "Santiago";

    // 2. Buscando um pais com find()
    auto it = tabela.find("Japao");

    if (it != tabela.end()) {
        cout << "Capital do Japao: " << it->second << endl;
    }

    // 3. Removendo um pais
    tabela.erase("Italia");

    // Confirmando com count()
    if (tabela.count("Italia") == 0) {
        cout << "Italia foi removida." << endl;
    }

    // 4. Exibindo todos os pares restantes
    cout << endl;
    cout << "Paises e capitais:" << endl;

    for (auto& p : tabela) {
        cout << p.first << " - " << p.second << endl;
    }

    // 5. Inserindo o mesmo pais duas vezes
    tabela["Brasil"] = "Brasilia";
    tabela["Brasil"] = "Campos do Jordao";

    // Como a chave Brasil ja existe, o valor anterior
    // e substituido pelo novo. Nao sao criadas duas chaves.

    cout << endl;
    cout << "Brasil: " << tabela["Brasil"] << endl;

    return 0;
}
