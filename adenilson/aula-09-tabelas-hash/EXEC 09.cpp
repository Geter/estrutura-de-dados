#include <iostream>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
    set<string> cidades = {"Recife", "Curitiba", "Salvador", "Manaus", "Belem"};

    cout << "set:" << endl;
    for (string cidade : cidades) {
        cout << cidade << endl;
    }

    cout << "Tamanho antes: " << cidades.size() << endl;
    cidades.insert("Recife");
    cout << "Tamanho depois: " << cidades.size() << endl;

    if (cidades.find("Manaus") != cidades.end()) {
        cout << "Manaus esta no conjunto." << endl;
    } else {
        cout << "Manaus nao esta no conjunto." << endl;
    }

    unordered_set<string> outrasCidades = {"Recife", "Curitiba", "Salvador", "Manaus", "Belem"};

    cout << "unordered_set:" << endl;
    for (string cidade : outrasCidades) {
        cout << cidade << endl;
    }

    // O set exibe as cidades ordenadas pela chave, aqui em ordem alfabetica.
    // O unordered_set nao garante a ordem de exibicao.
    // Ambos armazenam apenas valores unicos, sem duplicatas.

    return 0;
}
