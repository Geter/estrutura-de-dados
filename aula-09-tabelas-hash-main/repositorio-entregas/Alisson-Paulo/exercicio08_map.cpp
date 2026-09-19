#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    map<string, double> notasOrdenadas;
    notasOrdenadas["Paulo"] = 7.5;
    notasOrdenadas["Ana"] = 9.0;
    notasOrdenadas["Diego"] = 6.5;
    notasOrdenadas["Bruna"] = 8.0;
    notasOrdenadas["Carla"] = 7.0;

    cout << "map (ordenado por chave):" << endl;
    for (auto& p : notasOrdenadas) {
        cout << "  " << p.first << " - " << p.second << endl;
    }

    unordered_map<string, double> notasNaoOrdenadas;
    notasNaoOrdenadas["Paulo"] = 7.5;
    notasNaoOrdenadas["Ana"] = 9.0;
    notasNaoOrdenadas["Diego"] = 6.5;
    notasNaoOrdenadas["Bruna"] = 8.0;
    notasNaoOrdenadas["Carla"] = 7.0;

    cout << "unordered_map (sem ordem definida):" << endl;
    for (auto& p : notasNaoOrdenadas) {
        cout << "  " << p.first << " - " << p.second << endl;
    }

    return 0;
}
