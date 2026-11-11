// ============================================================
// Exercicio 07 - unordered_multiset
// ============================================================
// Apenas chaves, sem valor associado, mas duplicatas sao
// mantidas. Serve para contar quantas vezes cada elemento
// aparece.
//
// Atencao: erase(valor) remove TODAS as ocorrencias daquele
// valor de uma vez.
//
// O que voce deve fazer:
//   1. Crie um multiset com as notas {7, 8, 7, 9, 6, 8, 7, 10, 6, 9}.
//   2. Use count() para descobrir quantos alunos tiraram 7.
//   3. Insira mais duas notas e exiba o tamanho total.
//   4. Use erase() para remover todas as notas 6 e confirme com
//      count().
//   5. Exiba todas as notas restantes com for.
// ============================================================

#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_multiset<int> notas = {7, 8, 7, 9, 6, 8, 7, 10, 6, 9};

    cout << ">> Quantidade de alunos que tiraram nota 7: "
         << notas.count(7) << endl;

    notas.insert(8);
    notas.insert(10);

    cout << ">> Quantidade total de notas apos as insercoes: "
         << notas.size() << endl;

    notas.erase(6);

    cout << ">> Quantidade de notas 6 apos a remocao: "
         << notas.count(6) << endl;

    cout << ">> Notas restantes: ";

    for (int nota : notas)
    {
        cout << nota << ", ";
    }

    cout << endl;

    return 0;
}