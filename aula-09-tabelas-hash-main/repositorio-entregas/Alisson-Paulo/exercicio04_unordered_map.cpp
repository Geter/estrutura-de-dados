#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, string> capitais;

    capitais["Brasil"] = "Brasilia";
    capitais["Franca"] = "Paris";
    capitais["Japao"] = "Toquio";
    capitais["Egito"] = "Cairo";
    capitais["Canada"] = "Ottawa";

    auto encontrado = capitais.find("Franca");
    if (encontrado != capitais.end()) {
        cout << "Capital da Franca: " << encontrado->second << endl;
    }

    capitais.erase("Egito");
    cout << "Egito ainda esta na tabela? " << capitais.count("Egito") << endl;

    cout << "Pares restantes:" << endl;
    for (auto& p : capitais) {
        cout << "  " << p.first << " - " << p.second << endl;
    }

    capitais["Brasil"] = "Rio de Janeiro";
    cout << "Brasil apos segunda insercao: " << capitais["Brasil"] << endl;

    return 0;
}
