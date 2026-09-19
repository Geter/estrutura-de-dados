#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_multiset<int> notas = {7, 8, 7, 9, 6, 8, 7, 10, 6, 9};

    cout << "Quantos alunos tiraram 7: " << notas.count(7) << endl;

    notas.insert(10);
    notas.insert(5);
    cout << "Tamanho total: " << notas.size() << endl;

    notas.erase(6);
    cout << "Notas 6 restantes: " << notas.count(6) << endl;

    cout << "Notas restantes:" << endl;
    for (int nota : notas) {
        cout << "  " << nota << endl;
    }

    return 0;
}
