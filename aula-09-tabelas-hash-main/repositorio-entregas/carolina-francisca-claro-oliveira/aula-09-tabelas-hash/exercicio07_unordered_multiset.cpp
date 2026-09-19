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

int main(void) {

    // 1. criar o multiset com as notas
    unordered_multiset<int> notas = {7, 8, 7, 9, 6, 8, 7, 10, 6, 9};

    // 2. Alunos que tiraram notas = 7
    cout << "Quantidade de notas 7: " << notas.count(7) << endl;

    // 3. Inserir mais duas notas
    notas.insert(8);
    notas.insert(10);

    cout << "Tamanho total: " << notas.size() << endl;

    // 4. Remover todas as notas 6
    notas.erase(6);

    cout << "Quantidade de notas 6 depois do erase: " << notas.count(6) << endl;

    // 5. Exibir todas as notas restantes
    cout << "Notas restantes:" << endl;

    for (int nota : notas) {
        cout << nota << " ";
    }

    cout << endl;

    return 0;
}
