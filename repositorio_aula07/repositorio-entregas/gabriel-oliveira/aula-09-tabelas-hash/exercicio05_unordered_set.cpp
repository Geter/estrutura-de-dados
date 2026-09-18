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
    unordered_set<int> valores = {10, 20, 30, 20, 10, 40};

    cout << ">> Quantidade de elementos unicos: "
         << valores.size() << endl;

    cout << ">> Tamanho antes das insercoes: "
         << valores.size() << endl;

    valores.insert(50);
    valores.insert(20);

    cout << ">> Tamanho depois das insercoes: "
         << valores.size() << endl;

    if (valores.count(30) > 0)
    {
        cout << ">> O valor 30 existe no set." << endl;
    }
    else
    {
        cout << ">> O valor 30 nao existe no set." << endl;
    }

    valores.erase(10);

    cout << ">> Elementos restantes: ";

    for (int valor : valores)
    {
        cout << valor << " ";
    }

    cout << endl;

    unordered_set<int> ingressosUsados;

    int ingresso = 1234;

    if (ingressosUsados.count(ingresso) == 0)
    {
        ingressosUsados.insert(ingresso);
        cout << ">> Ingresso liberado." << endl;
    }

    if (ingressosUsados.count(ingresso) > 0)
    {
        cout << ">> Ingresso ja usado." << endl;
    }

    return 0;
}
