// ============================================================
// Exercicio 05 - unordered_set
// ============================================================
// Armazena apenas chaves unicas. Duplicatas sao ignoradas
// silenciosamente.
//
// O que voce deve fazer:
//   1. Crie um set com os valores {10, 20, 30, 20, 10, 40}.
//      Exiba o tamanho. Quantos elementos entraram?
//   2. Insira os valores 50 e 20. Exiba o tamanho antes e depois.
//   3. Use count() para verificar se o valor 30 existe.
//   4. Use erase() para remover o 10 e exiba todos os elementos
//      restantes.
//   5. Simule um controle de acesso: cadastre numeros de ingresso
//      e verifique se um ingresso ja foi usado.
// ============================================================

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> valores = {10, 20, 30, 20, 10, 40};

    cout << "Tamanho inicial: " << valores.size() << endl;

    int antes = valores.size();

    valores.insert(50);
    valores.insert(20);

    cout << "Tamanho antes: " << antes << endl;
    cout << "Tamanho depois: " << valores.size() << endl;

    cout << "30 existe? " << (valores.count(30) ? "sim" : "nao") << endl;

    valores.erase(10);

    cout << "Elementos restantes: ";
    for (int valor : valores) {
        cout << valor << " ";
    }
    cout << endl;

    unordered_set<int> ingressos = {101, 102, 103};

    int ingresso = 102;

    if (ingressos.count(ingresso)) {
        cout << "Ingresso " << ingresso << " ja foi usado." << endl;
    } else {
        cout << "Ingresso " << ingresso << " esta disponivel." << endl;
    }

    return 0;
}
