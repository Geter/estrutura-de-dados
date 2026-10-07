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

int main(void) {

    // 1. Criando o set com valores repetidos
    unordered_set<int> numeros = {10, 20, 30, 20, 10, 40};

    cout << "Tamanho inicial: " << numeros.size() << endl;

    // 2. Inserindo 50
    cout << "Antes de inserir 50: " << numeros.size() << endl;

    numeros.insert(50);

    cout << "Depois de inserir 50: " << numeros.size() << endl;

    // Tentando inserir 20 novamente
    cout << "Antes de inserir 20: " << numeros.size() << endl;

    numeros.insert(20);

    cout << "Depois de inserir 20: " << numeros.size() << endl;

    // 3. Verificando se 30 existe
    if (numeros.count(30) == 1) {
        cout << "O valor 30 existe." << endl;
    } else {
        cout << "O valor 30 nao existe." << endl;
    }

    // 4. Removendo o valor 10
    numeros.erase(10);

    cout << "Elementos restantes:" << endl;

    for (int numero : numeros) {
        cout << numero << " ";
    }

    cout << endl;

    // 5. Controle de acesso com ingressos
    unordered_set<int> ingressosUsados;

    int ingresso = 1234;

    if (ingressosUsados.count(ingresso) == 0) {

        cout << "Ingresso liberado." << endl;

        ingressosUsados.insert(ingresso);

    } else {

        cout << "Ingresso ja utilizado." << endl;
    }

    // Tentando usar o mesmo ingresso novamente
    if (ingressosUsados.count(ingresso) == 0) {

        cout << "Ingresso liberado." << endl;

        ingressosUsados.insert(ingresso);

    } else {

        cout << "Ingresso ja utilizado." << endl;
    }

    return 0;
}
