#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> numeros = {10, 20, 30, 20, 10, 40};

    cout << "Tamanho inicial: " << numeros.size() << endl;

    numeros.insert(50);

    cout << "Antes de inserir 20: " << numeros.size() << endl;

    numeros.insert(20);

    cout << "Depois de inserir 20: " << numeros.size() << endl;

    cout << "30 existe? " << numeros.count(30) << endl;

    numeros.erase(10);

    for (int numero : numeros) {
        cout << numero << " ";
    }

    cout << endl;

    unordered_set<int> ingressos;

    ingressos.insert(101);
    ingressos.insert(102);
    ingressos.insert(103);

    int ingresso = 102;

    if (ingressos.count(ingresso)) {
        cout << "Ingresso ja usado." << endl;
    } else {
        cout << "Ingresso disponivel." << endl;
        ingressos.insert(ingresso);
    }

    return 0;
}
