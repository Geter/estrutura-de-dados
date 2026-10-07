// ============================================================
// Exercicio 08 - map
// ============================================================
// Igual ao unordered_map, mas sempre ordenado pela chave.
// O acesso e O(log n), porque usa arvore balanceada.
//
// O que voce deve fazer:
//   1. Crie um map com 5 alunos e suas notas finais.
//   2. Exiba todos com for. Observe a ordem da saida.
//   3. Faca o mesmo com unordered_map e compare as duas saidas.
//   4. Registre em um comentario qual foi a diferenca.
//   5. Em que situacao valeria a pena aceitar O(log n) em troca
//      da ordem?
// ============================================================

#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int main(void) {

    // 1. Criando um map com 5 alunos e suas notas
    map<string, double> notasOrdenadas;

    notasOrdenadas["Carlos"] = 8.5;
    notasOrdenadas["Carolina"] = 9.0;
    notasOrdenadas["Joel"] = 7.5;
    notasOrdenadas["Flavia"] = 6.0;
    notasOrdenadas["Beatriz"] = 10.0;

    // 2. Exibindo o map
    cout << "MAP:" << endl;

    for (auto& aluno : notasOrdenadas) {
        cout << aluno.first << " - " << aluno.second << endl;
    }

    cout << endl;

    // 3. Fazendo o mesmo com unordered_map
    unordered_map<string, double> notasNaoOrdenadas;

    notasNaoOrdenadas["Carlos"] = 8.5;
    notasNaoOrdenadas["Carolina"] = 9.0;
    notasNaoOrdenadas["Joel"] = 7.5;
    notasNaoOrdenadas["Flavia"] = 6.0;
    notasNaoOrdenadas["Beatriz"] = 10.0;

    cout << "UNORDERED_MAP:" << endl;

    for (auto& aluno : notasNaoOrdenadas) {
        cout << aluno.first << " - " << aluno.second << endl;
    }

    // O map exibe as chaves em ordem crescente.
    // O unordered_map nao garante ordem na exibicao.
    //
    // Vale a pena usar map quando a ordem das chaves for importante,
    // mesmo aceitando acesso O(log n).

    return 0;
}
