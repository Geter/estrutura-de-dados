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
    // 1. Crie um set com os valores {10, 20, 30, 20, 10, 40}. Exiba o tamanho.
    unordered_set<int> meuSet = {10, 20, 30, 20, 10, 40};
    cout << "Tamanho inicial: " << meuSet.size() << endl; // Entraram 4 elementos (duplicatas foram ignoradas)

    // 2. Insira os valores 50 e 20. Exiba o tamanho antes e depois.
    cout << "Tamanho antes: " << meuSet.size() << endl;
    meuSet.insert(50);
    meuSet.insert(20); // 20 ja existe, sera ignorado
    cout << "Tamanho depois: " << meuSet.size() << endl;

    // 3. Use count() para verificar se o valor 30 existe.
    if (meuSet.count(30) > 0) {
        cout << "O valor 30 existe no set." << endl;
    }

    // 4. Use erase() para remover o 10 e exiba todos os elementos restantes.
    meuSet.erase(10);
    cout << "Elementos restantes: ";
    for (int valor : meuSet) {
        cout << valor << " ";
    }
    cout << endl;

    // 5. Simule um controle de acesso: cadastre numeros de ingresso e verifique se um ingresso ja foi usado.
    unordered_set<int> ingressosUsados;
    int ingresso = 1001;

    // Tentativa 1: Ingresso valido
    if (ingressosUsados.count(ingresso) == 0) {
        ingressosUsados.insert(ingresso);
        cout << "Ingresso " << ingresso << " aceito. Entrada liberada!" << endl;
    } else {
        cout << "Ingresso " << ingresso << " ja foi utilizado!" << endl;
    }

    // Tentativa 2: Tentando reutilizar o mesmo ingresso
    if (ingressosUsados.count(ingresso) == 0) {
        ingressosUsados.insert(ingresso);
        cout << "Ingresso " << ingresso << " aceito. Entrada liberada!" << endl;
    } else {
        cout << "Ingresso " << ingresso << " ja foi utilizado!" << endl;
    }

    return 0;
}