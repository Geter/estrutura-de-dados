#include <iostream>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
    set<string> cidades = {
        "Recife",
        "Brasilia",
        "Curitiba",
        "Salvador",
        "Manaus"
    };

    cout << "set:" << endl;

    for (string cidade : cidades) {
        cout << cidade << endl;
    }

    cout << "Tamanho antes: " << cidades.size() << endl;

    cidades.insert("Recife");

    cout << "Tamanho depois: " << cidades.size() << endl;

    if (cidades.find("Salvador") != cidades.end()) {
        cout << "Salvador existe." << endl;
    }

    unordered_set<string> cidadesUnordered = {
        "Recife",
        "Brasilia",
        "Curitiba",
        "Salvador",
        "Manaus"
    };

    cout << endl << "unordered_set:" << endl;

    for (string cidade : cidadesUnordered) {
        cout << cidade << endl;
    }

    return 0;
}
