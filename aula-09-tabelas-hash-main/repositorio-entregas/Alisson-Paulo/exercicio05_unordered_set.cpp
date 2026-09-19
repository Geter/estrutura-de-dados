#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> numeros = {10, 20, 30, 20, 10, 40};
    cout << "Tamanho: " << numeros.size() << endl;

    cout << "Tamanho antes: " << numeros.size() << endl;
    numeros.insert(50);
    numeros.insert(20);
    cout << "Tamanho depois: " << numeros.size() << endl;

    cout << "O valor 30 existe? " << numeros.count(30) << endl;

    numeros.erase(10);
    cout << "Elementos restantes:" << endl;
    for (int n : numeros) {
        cout << "  " << n << endl;
    }

    unordered_set<int> ingressosUsados;
    int ingressos[5] = {101, 102, 103, 101, 104};
    for (int ingresso : ingressos) {
        if (ingressosUsados.count(ingresso)) {
            cout << "Ingresso " << ingresso << " ja foi usado!" << endl;
        } else {
            ingressosUsados.insert(ingresso);
            cout << "Ingresso " << ingresso << " liberado." << endl;
        }
    }

    return 0;
}
