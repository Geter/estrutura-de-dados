#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_multiset<int> notas = {
        7, 8, 7, 9, 6, 8, 7, 10, 6, 9
    };

    cout << "Alunos que tiraram 7: "
         << notas.count(7) << endl;

    notas.insert(5);
    notas.insert(8);

    cout << "Tamanho total: " << notas.size() << endl;

    notas.erase(6);

    cout << "Quantidade de notas 6: "
         << notas.count(6) << endl;

    for (int nota : notas) {
        cout << nota << " ";
    }

    cout << endl;

    return 0;
}
