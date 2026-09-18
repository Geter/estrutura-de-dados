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
    // 1. Criando a tabela com 5 paises e capitais (chave: string, valor: string)
    unordered_map<string, string> tabela = {
        {"Brasil", "Brasilia"},
        {"Franca", "Paris"},
        {"Japao", "Toquio"},
        {"Canada", "Ottawa"},
        {"Alemanha", "Berlim"}
    };


    auto it = tabela.find("Japao");
    if (it != tabela.end()) {
        cout << "Busca bem-sucedida! Capital do Japao: " << it->second << endl;
    } else {
        cout << "Pais nao encontrado." << endl;
    }

    cout << "\n----------------------------------------\n";

    tabela.erase("Franca");
    
    if (tabela.count("Franca") == 0) {
        cout << "Franca foi removida com sucesso da tabela." << endl;
    } else {
        cout << "Franca ainda esta na tabela." << endl;
    }

    cout << "\n----------------------------------------\n";

    cout << "Pares restantes na tabela:" << endl;
    for (auto& p : tabela) {
        cout << p.first << " -> " << p.second << endl;
    }

    cout << "\n----------------------------------------\n";

    // O unordered_map nao permite chaves duplicadas. 
    // - Se usarmos o metodo .insert({"Brasil", "Rio de Janeiro"}), a insercao 
    //   e ignorada porque a chave "Brasil" ja existe, mantendo o valor original ("Brasilia").
    // - Se usarmos o operador de colchetes tabela["Brasil"] = "Rio de Janeiro", 
    //   o valor anterior sera sobrescrito pelo novo.
    
    tabela.insert({"Brasil", "Rio de Janeiro"}); // Ignorado (chave ja existe)
    cout << "Apos insert com chave duplicada, Brasil continua: " << tabela["Brasil"] << endl;

    tabela["Brasil"] = "Rio de Janeiro"; // Sobrescreve o valor existente
    cout << "Apos atribuicao direta ([]), Brasil mudou para: " << tabela["Brasil"] << endl;

    return 0;
}
