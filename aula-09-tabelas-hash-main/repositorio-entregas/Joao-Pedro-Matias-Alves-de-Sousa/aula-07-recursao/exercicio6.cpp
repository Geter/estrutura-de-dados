#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    unordered_multimap<string, double> notas;

    notas.insert({"Joao", 8.5});
    notas.insert({"Joao", 7.0});
    notas.insert({"Joao", 9.5});
    notas.insert({"Maria", 8.0});
    notas.insert({"Pedro", 6.5});

    cout << "Quantidade de notas de Joao: "
         << notas.count("Joao") << endl;

    auto intervalo = notas.equal_range("Joao");

    for (auto it = intervalo.first; it != intervalo.second; ++it) {
        cout << it->first << " - " << it->second << endl;
    }

    notas.erase("Joao");

    cout << "Quantidade de elementos apos remover Joao: "
         << notas.size() << endl;

    return 0;
}
