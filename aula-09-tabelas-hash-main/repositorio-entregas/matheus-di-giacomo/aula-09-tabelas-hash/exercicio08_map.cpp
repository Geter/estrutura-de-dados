// ============================================================
// Exercicio 08 - map
// ============================================================
// Igual ao unordered_map, mas sempre ordenado pela chave.
// O acesso e O(log n), porque usa arvore balanceada.
//
// O que voce deve fazer:
//   1. Crie um map com 5 alunos e suas notas finais.
//   2. Exiba todos com for. Observe a ordem da saida.
//   3. Faca o mesmo com unordered_map e compare as duas saidas.
//   4. Registre em um comentario qual foi a diferenca.
//   5. Em que situacao valeria a pena aceitar O(log n) em troca
//      da ordem?
// ============================================================

#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    // 1. Crie um map com 5 alunos e suas notas finais.
    map<string, double> alunosMap = {
        {"Carlos", 8.5},
        {"Ana", 9.0},
        {"Bruno", 7.5},
        {"Daniela", 8.0},
        {"Eduardo", 9.5}
    };

    // 2. Exiba todos com for. Observe a ordem da saida.
    cout << "Conteudo do std::map (ordenado):" << endl;
    for (auto& p : alunosMap) {
        cout << p.first << " -> " << p.second << endl;
    }

    // 3. Faca o mesmo com unordered_map e compare as duas saidas.
    unordered_map<string, double> alunosUnordered = {
        {"Carlos", 8.5},
        {"Ana", 9.0},
        {"Bruno", 7.5},
        {"Daniela", 8.0},
        {"Eduardo", 9.5}
    };

    cout << "\nConteudo do std::unordered_map (nao ordenado):" << endl;
    for (auto& p : alunosUnordered) {
        cout << p.first << " -> " << p.second << endl;
    }

    // 4. Registre em um comentario qual foi a diferenca.
    // Diferenca: O std::map mantem os elementos ordenados pelas chaves (em ordem alfabetica neste caso: Ana, Bruno, Carlos...),
    // enquanto o std::unordered_map exibe os elementos em uma ordem arbitraria determinada pela funcao hash.

    // 5. Em que situacao valeria a pena aceitar O(log n) em troca da ordem?
    // Valeria a pena quando precisamos iterar pelos dados em ordem especifica, realizar operacoes de busca por intervalo 
    // (range queries usando lower_bound ou upper_bound), ou quando precisamos que o menor/maior elemento seja acessado 
    // eficientemente atraves de metodos como begin() ou rbegin().

    return 0;
}