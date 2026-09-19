# Aula 08 - Dividir para Conquistar

Exercícios da aula de 11 de setembro de 2026.

| Arquivo | O que fazer | Saída esperada |
|---|---|---|
| `exercicio1_merge_sort.cpp` | Escrever a função `mergeSort` | `9 10 27 38 43 82` |
| `exercicio2_quick_sort.cpp` | Escrever a função `quickSort` | `9 10 27 38 43 82` |

As funções `merge` e `particionar` já estão prontas nos arquivos, comentadas.
Você escreve apenas as funções recursivas.

## As duas perguntas, como sempre

Qual é o caso base? Pense em qual trecho já está ordenado sem precisar de
nenhum trabalho.

Como reduzir o problema? Pense em que trechos menores precisam ser ordenados
antes, e o que fazer com eles depois.

## Pontos de atenção

No Merge Sort, o `merge` só funciona se as duas metades já estiverem ordenadas.
A ordem das linhas dentro do `mergeSort` importa.

No Quick Sort, o `particionar` devolve a posição onde o pivô ficou. Essa posição
não entra nas chamadas seguintes, porque o pivô já está no lugar definitivo.

Nos dois, o caso base precisa cobrir também o trecho vazio, que aparece quando
o pivô cai na ponta do vetor.

## Desafios em aberto

Os exercícios 13 e 14 da aula anterior, MDC e Torres de Hanói, continuam
valendo como desafio. Eles não foram explicados em aula.

## Entrega

Por pull request, no repositório de entregas, dentro da sua pasta:

```
seu-nome/aula-08-divisao-conquista/
```

O passo a passo está no arquivo GUIA_PULL_REQUEST.md, na raiz daquele
repositório.
