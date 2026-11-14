#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, string> tabela;

    tabela["Brasil"] = "Brasilia";
    tabela["Argentina"] = "Buenos Aires";
    tabela["Franca"] = "Paris";
    tabela["Japao"] = "Toquio";
    tabela["Italia"] = "Roma";

    auto busca = tabela.find("Brasil");

    if (busca != tabela.end()) {
        cout << busca->first << " - " << busca->second << endl;
    }

    tabela.erase("Italia");

    cout << "Italia existe? " << tabela.count("Italia") << endl;

    for (auto& p : tabela) {
        cout << p.first << " - " << p.second << endl;
    }

    tabela["Brasil"] = "Rio de Janeiro";

    cout << "Brasil - " << tabela["Brasil"] << endl;

    return 0;
}
