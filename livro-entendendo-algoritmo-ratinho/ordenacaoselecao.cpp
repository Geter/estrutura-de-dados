#include <iostream>
#include <array>

using namespace std;

// Funcao que procura o menor valor dentro da parte valida do array
// e devolve o indice onde esse menor valor esta.
int buscaMenor(array<int, 5> lista, int quantidade) {

    int menor = lista[0];

    // Armazena o indice desse menor valor.
    int menor_indice = 0;


    // Percorre o array.
    for (int i = 0; i < quantidade; i++) {

        // Verifica se o elemento atual eh menor que o menor valor encontrado ate agora.
        if (lista[i] < menor) {

            // Atualiza o menor valor.
            menor = lista[i];

            // Guarda o indice onde esse menor foi encontrado.
            menor_indice = i;
        }
    }


    // Retorna o indice do menor elemento encontrado.
    return menor_indice;
}


// Procedimento que realiza a ordenacao por selecao.
void ordenacaoSelecao(array<int, 5> lista) {

    // Cria um novo array que recebera os elementos ja em ordem.
    array<int, 5> novaLista;


    // Faz uma copia da lista original.
    // Essa copia sera modificada durante a ordenacao.
    array<int, 5> copiarLista = lista;


    // Guarda quantos elementos da copia ainda
    // devem ser considerados.
    int quantidade = copiarLista.size();


    // Repete o processo uma vez para cada elemento da lista.
    for (int i = 0; i < lista.size(); i++) {

        // Procura o indice do menor elemento
        // dentro da parte ainda valida da copia.
        int menor = buscaMenor(copiarLista, quantidade);


        // Coloca o menor valor encontrado
        // na proxima posicao da nova lista.
        novaLista[i] = copiarLista[menor];


        // Como std::array tem tamanho fixo,
        // nao podemos apagar um elemento de verdade.
        //
        // Entao deslocamos todos os elementos
        // que estao depois do menor uma posicao para a esquerda.
        for (int j = menor; j < quantidade - 1; j++) {

            copiarLista[j] = copiarLista[j + 1];
        }


        // Diminuimos a quantidade de elementos validos.
        //
        // Assim, na proxima busca,
        // o ultimo elemento da copia sera ignorado.
        quantidade--;
    }


    // Exibe a lista ja ordenada.
    cout << "Lista ordenada: ";


    // Percorre todos os elementos de novaLista.
    for (int numero : novaLista) {

        cout << numero << " ";
    }


    cout << endl;
}


int main() {

    // Lista original que sera ordenada.
    array<int, 5> lista = {5, 3, 8, 1, 4};


    // Chama a funcao de ordenacao.
    ordenacaoSelecao(lista);


    return 0;
}
