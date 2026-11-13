# Aula 10 - Árvores Binárias de Busca

Exercícios da aula de 25 de setembro de 2026.

| Arquivo | O que fazer | Saída esperada |
|---|---|---|
| `exercicio1_insercao.cpp` | Escrever `inserir` | `10 20 30 35 40 50 60 70 80` |
| `exercicio2_percursos.cpp` | Escrever `emOrdem`, `preOrdem` e `posOrdem` | três linhas, uma por percurso |
| `exercicio3_pesquisa.cpp` | Escrever `pesquisa` | `sim`, `nao`, `sim`, `sim`, `nao` |
| `exercicio4_contar_nos.cpp` | Escrever `contarNos` | `A arvore tem 9 nos.` |
| `exercicio5_altura.cpp` | Escrever `altura` | `Altura: 3` |
| `exercicio6_menor_maior.cpp` | Escrever `menorValor` e `maiorValor` | `Menor: 10` e `Maior: 80` |
| `projeto_cadastro_produtos.cpp` | Montar o sistema com menu | interativo |

A `struct No` vem pronta em todos os arquivos. A partir do exercício 2 a função
`inserir` também vem pronta. O suporte dos comentários diminui a cada exercício.

Todos usam a mesma árvore de teste, montada com os códigos 50, 30, 70, 20, 40,
60, 80, 10, 35, nessa ordem.

## As duas perguntas de sempre

Qual é o caso base? Em árvore, quase sempre é `raiz == nullptr`.

Como reduzir o problema? Descendo para `raiz->esq` ou `raiz->dir`. Cada chamada
recebe uma subárvore menor que a anterior.

## Pontos de atenção

Na inserção, o retorno de cada chamada precisa ser guardado de volta em
`raiz->esq` ou `raiz->dir`. Sem isso a árvore não muda.

Nos percursos, o corpo das três funções é o mesmo. Só muda onde fica a linha
que imprime.

Na altura, o caso base vale `-1` e não `0`. Assim uma árvore com um único nó
fica com altura zero, que é o que a definição pede.

Em `menorValor` e `maiorValor` não é preciso percorrer a árvore inteira.

## Compilador

Os arquivos usam `nullptr`, que exige C++11. No Code::Blocks, marque a opção
em Settings, Compiler, e ative `-std=c++11`.

## Entrega

Por pull request, no repositório de entregas, dentro da sua pasta:

```
seu-nome/aula-10-arvore-bst/
```

O passo a passo está no arquivo GUIA_PULL_REQUEST.md, na raiz daquele
repositório.
