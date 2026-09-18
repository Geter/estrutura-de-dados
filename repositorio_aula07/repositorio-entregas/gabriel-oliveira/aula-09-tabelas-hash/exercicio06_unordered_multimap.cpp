// ============================================================
// Exercicio 06 - unordered_multimap
// ============================================================
// Pares chave e valor, mas a mesma chave pode ter varios
// valores. Nao usa o operador [], usa insert().
//
// Para percorrer todos os valores de uma chave use equal_range,
// que devolve o inicio e o fim das ocorrencias.
//
// O que voce deve fazer:
//   1. Crie uma tabela onde a chave e o nome de um aluno e o
//      valor e uma nota.
//   2. Insira pelo menos 3 notas para o mesmo aluno.
//   3. Use count() para mostrar quantas notas esse aluno tem.
//   4. Use equal_range() para listar todas as notas dele.
//   5. Use erase() para remover todas as notas de um aluno e
//      confirme com size().
// ============================================================

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_multimap<string, float> notas;

    notas.insert({"Ana", 7.5});
    notas.insert({"Ana", 8.0});
    notas.insert({"Ana", 9.0});
    notas.insert({"Bruno", 6.5});

    cout << ">> Quantidade de notas da Ana: "
         << notas.count("Ana") << endl;

    cout << ">> Notas da Ana: ";

    auto intervalo = notas.equal_range("Ana");

    for (auto it = intervalo.first; it != intervalo.second; it++)
    {
        cout << it->second << ", ";
    }

    notas.erase("Bruno");

    cout << "\n>> Quantidade de registros apos remover Bruno: "
         << notas.size() << endl;

    return 0;
}
