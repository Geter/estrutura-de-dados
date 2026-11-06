# Aula 11 - Remoção em Árvore Binária de Busca

Exercício da aula de 6 de novembro de 2026.

| Arquivo | O que fazer | Saída esperada |
|---|---|---|
| `exercicio7_remocao.cpp` | Escrever `apagar` usando o sucessor | quatro linhas em pré-ordem |

A `struct No`, o `inserir` e o `preOrdem` vêm prontos. Você escreve apenas a
função `apagar`.

## O que muda em relação à aula

Em aula, o caso de dois filhos usou o predecessor, o maior valor da subárvore
esquerda. Aqui você usa o sucessor, o menor valor da subárvore direita.

Os casos 1 e 2 são iguais. Só o caso 3 muda, e muda em dois lugares: onde
procurar o nó substituto e de qual subárvore removê-lo depois.

## Pontos de atenção

A saída está em pré-ordem de propósito. Em-ordem, as duas versões imprimem a
mesma coisa, porque a árvore continua ordenada. Em pré-ordem a diferença
aparece na última linha.

O sucessor nunca tem filho à esquerda, pelo mesmo motivo que o predecessor nunca
tem filho à direita. Por isso removê-lo sempre cai no caso 1 ou no caso 2.

## Entrega

Por pull request, no repositório de entregas, dentro da sua pasta:

```
seu-nome/aula-10b-remocao-bst/
```
