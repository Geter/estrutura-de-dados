# Aula 09 - Tabelas Hash

Lista de exercícios da aula de 18 de setembro de 2026.

São 10 exercícios. Os três primeiros implementam funções hash do livro, os
demais praticam as bibliotecas do C++.

| Arquivo | O que fazer |
|---|---|
| `exercicio01_peso_posicional.cpp` | Função hash com primos e peso posicional |
| `exercicio02_primos_acumulados.cpp` | Função hash com primos multiplicados |
| `exercicio03_std_hash.cpp` | Função hash real do C++, `std::hash` |
| `exercicio04_unordered_map.cpp` | Pares chave e valor, chave única |
| `exercicio05_unordered_set.cpp` | Apenas chaves, sem duplicatas |
| `exercicio06_unordered_multimap.cpp` | Chave repetida com vários valores |
| `exercicio07_unordered_multiset.cpp` | Chaves repetidas, para contagem |
| `exercicio08_map.cpp` | Versão ordenada, comparada com a não ordenada |
| `exercicio09_set.cpp` | Conjunto ordenado |
| `exercicio10_integrador.cpp` | Três bibliotecas no mesmo programa |

Os exercícios 1 e 2 usam o arquivo `primos.h`, que já está na pasta. Mantenha
ele junto dos seus arquivos ao entregar.

## Saídas esperadas

Exercício 1: `Esther 5`, `Ben 4`, `Bob 6`, `Dan 0`

Exercício 2: `A 2`, `AA 4`, `AAA 8`, `AAAA 6`

Exercício 3 não tem saída única. O resultado de `std::hash` varia entre
compiladores, então o seu pode ser diferente do de um colega. Isso faz parte
do exercício.

Nos demais a saída depende dos dados que você escolher.

## Pontos de atenção

No `unordered_map`, o operador `[]` cria a chave se ela não existir. Para apenas
consultar, use `find` ou `count`.

Antes de usar o iterador devolvido por `find`, teste se ele é diferente de
`end()`. O `end()` significa que a chave não foi encontrada.

No `unordered_multiset` e no `unordered_multimap`, `erase(chave)` remove todas
as ocorrências de uma vez, não apenas uma.

No exercício 1, a posição da letra começa em 1, e não em 0.

No exercício 2, o acumulador começa em 1, porque o valor inicial de uma
multiplicação não pode ser zero.

## Entrega

Por pull request, no repositório de entregas, dentro da sua pasta:

```
seu-nome/aula-09-tabelas-hash/
```

O passo a passo está no GUIA_PULL_REQUEST.md, na raiz daquele repositório.
