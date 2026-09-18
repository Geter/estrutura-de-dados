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

int main()
{

    unordered_set<int> meuSet = {10, 20, 30, 20, 10, 40};
    for (const auto &valores : meuSet)
    {
        cout << valores << " ";
    }
    cout << "Tamanho do set antes: " << meuSet.size() << endl;

    meuSet.insert(20);
    meuSet.insert(50);

    cout << "Tamanho do set depois: " << meuSet.size() << endl;

    if (meuSet.count(30) == 1)
    {
        cout << "O numero 30 esta no set!" << endl;
    }
    else
    {
        cout << "O numero 30 nao foi encontrado." << endl;
    }

    meuSet.erase(10);

     cout << "Tamanho do set depois de tirar o 10: " << meuSet.size() << endl;

    meuSet.erase(30);

        if (meuSet.count(30) == 1)
    {
        cout << "O numero 30 esta no set!" << endl;
    }
    else
    {
        cout << "O numero 30 nao foi encontrado." << endl;
    }
    
    return 0;
}
