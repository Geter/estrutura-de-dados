#include <iostream>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
    set<string> cidades = {"Salvador", "Belem", "Curitiba", "Manaus", "Aracaju"};

    cout << "set (ordenado):" << endl;
    for (const string& cidade : cidades) {
        cout << "  " << cidade << endl;
    }

    size_t tamanhoAntes = cidades.size();
    cidades.insert("Manaus");
    cout << "Tamanho antes: " << tamanhoAntes << ", depois de reinserir Manaus: "
         << cidades.size() << endl;

    if (cidades.find("Curitiba") != cidades.end()) {
        cout << "Curitiba esta no conjunto." << endl;
    }

    unordered_set<string> cidadesSemOrdem = {"Salvador", "Belem", "Curitiba", "Manaus", "Aracaju"};
    cout << "unordered_set (sem ordem definida):" << endl;
    for (const string& cidade : cidadesSemOrdem) {
        cout << "  " << cidade << endl;
    }

    return 0;
}
