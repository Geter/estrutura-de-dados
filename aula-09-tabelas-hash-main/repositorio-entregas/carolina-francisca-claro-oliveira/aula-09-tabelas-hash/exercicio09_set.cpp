// ============================================================
// Exercicio 09 - set
// ============================================================
// Igual ao unordered_set, mas sempre ordenado.
// O acesso e O(log n).
//
// O que voce deve fazer:
//   1. Crie um set com os nomes de 5 cidades, em ordem aleatoria.
//   2. Exiba todas. Observe a ordem da saida.
//   3. Tente inserir uma cidade que ja existe. O tamanho muda?
//   4. Use find() para verificar se uma cidade esta no conjunto.
//   5. Compare com unordered_set: o que muda na saida?
// ============================================================

#include <iostream>
#include <string>
#include <set>
#include <unordered_set>

using namespace std;

int main() {

    // 1. Criando um set com 5 cidades
    set<string> cidades;

    cidades.insert("Sao Bento do Sapucai");
    cidades.insert("Campos do Jordao");
    cidades.insert("Taubate");
    cidades.insert("Ubatuba");
    cidades.insert("Pindamonhangaba");

    // 2. Exibindo as cidades
    cout << "SET:" << endl;

    for (string cidade : cidades) {
        cout << cidade << endl;
    }

    cout << endl;

    // 3. Tentando inserir uma cidade repetida
    cout << "Tamanho antes: " << cidades.size() << endl;

    cidades.insert("Campos do Jordao");

    cout << "Tamanho depois: " << cidades.size() << endl;

    cout << endl;

    // 4. Verificando se uma cidade existe
    auto it = cidades.find("Taubate");

    if (it != cidades.end()) {
        cout << "Taubate esta no conjunto." << endl;
    } else {
        cout << "Taubate nao esta no conjunto." << endl;
    }

    cout << endl;

    // 5. Comparando com unordered_set
    unordered_set<string> cidadesNaoOrdenadas;

    cidadesNaoOrdenadas.insert("Sao Bento do Sapucai");
    cidadesNaoOrdenadas.insert("Campos do Jordao");
    cidadesNaoOrdenadas.insert("Taubate");
    cidadesNaoOrdenadas.insert("Ubatuba");
    cidadesNaoOrdenadas.insert("Pindamonhangaba");

    cout << "UNORDERED_SET:" << endl;

    for (string cidade : cidadesNaoOrdenadas) {
        cout << cidade << endl;
    }

    // O set mantem os elementos ordenados.
    // O unordered_set nao garante uma ordem de exibicao.
    //
    // Inserir uma cidade repetida nao altera o tamanho,
    // pois set e unordered_set armazenam apenas chaves unicas.

    return 0;
}
