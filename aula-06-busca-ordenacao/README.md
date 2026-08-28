# Aula 06 - Busca e Ordenação

Exercícios da aula de 28 de agosto de 2026.

| Arquivo | O que fazer | Saída esperada |
|---|---|---|
| `exercicio1_busca_binaria.cpp` | Função `buscaBinaria` | `5 -1` |
| `exercicio2_bubble.cpp` | Função `bubbleSort` | `10 20 30 40 50 60` |
| `exercicio3_selection.cpp` | Completar a troca no `selectionSort` | `10 20 30 40 50 60` |
| `exercicio4_insertion.cpp` | Função `insertionSort` | `10 20 30 40 50 60` |

Faça na ordem.

## Pontos de atenção

A busca binária devolve a **posição** do valor, não o valor. Quando não
encontra, devolve menos um.

Em `inicio = meio + 1` e `fim = meio - 1`, o mais um e o menos um são o que
impedem o laço de repetir para sempre.

O cálculo `(inicio + fim) / 2` é divisão entre inteiros, então a parte
fracionária é descartada.

A função `swap` troca o conteúdo de duas variáveis e evita as três linhas da
troca com variável auxiliar. Ela vem do cabeçalho `<utility>`, já incluído nos
arquivos.

No Bubble Sort, o `- i` no limite do laço interno evita comparar de novo a parte
que já está ordenada no fim do vetor.

No Selection Sort, a variável `menor` guarda a **posição** do menor valor, não o
valor em si.

No Insertion Sort, o teste `j >= 0` precisa vir antes da comparação com
`itens[j]`, senão o programa acessa uma posição inválida do vetor.
