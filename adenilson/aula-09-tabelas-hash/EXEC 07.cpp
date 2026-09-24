#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_multiset<int> notas = {7, 8, 7, 9, 6, 8, 7, 10, 6, 9};

    cout << "Alunos com nota 7: " << notas.count(7) << endl;

    int nota1, nota2;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    notas.insert(nota1);
    notas.insert(nota2);

    cout << "Total de notas: " << notas.size() << endl;

    notas.erase(6);
    cout << "Notas 6 restantes: " << notas.count(6) << endl;

    cout << "Notas restantes: ";
    for (int nota : notas) {
        cout << nota << " ";
    }

    cout << endl;
    return 0;
}
