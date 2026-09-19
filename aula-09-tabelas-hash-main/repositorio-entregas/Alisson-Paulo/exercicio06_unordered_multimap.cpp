#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    unordered_multimap<string, double> notas;

    notas.insert({"Ana", 8.5});
    notas.insert({"Ana", 7.0});
    notas.insert({"Ana", 9.5});
    notas.insert({"Bruno", 6.0});

    cout << "Quantidade de notas de Ana: " << notas.count("Ana") << endl;

    cout << "Notas de Ana:" << endl;
    auto intervalo = notas.equal_range("Ana");
    for (auto it = intervalo.first; it != intervalo.second; ++it) {
        cout << "  " << it->second << endl;
    }

    notas.erase("Ana");
    cout << "Tamanho da tabela apos remover Ana: " << notas.size() << endl;

    return 0;
}
