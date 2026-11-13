# Aula 11 - Árvores N-árias

Exercícios da aula de 6 de novembro de 2026.

| Arquivo | Representação | O que fazer |
|---|---|---|
| `exercicio1_contar_nos.cpp` | vetor de filhos | Escrever `contarNos` |
| `exercicio2_criar_filho_irmao.cpp` | primogênito e irmão | Escrever `criarFilho` |
| `exercicio3_contar_filhos.cpp` | primogênito e irmão | Escrever `contarFilhos` |
| `exercicio4_altura.cpp` | vetor de filhos | Escrever `altura` |
| `exercicio5_buscar_caminho.cpp` | vetor de filhos | Escrever `buscarCaminho` |
| `desafio_por_nivel.cpp` | vetor de filhos | Escrever `percorrerPorNivel` |

A saída esperada está no cabeçalho de cada arquivo. O suporte dos comentários
diminui a cada exercício. O desafio é opcional.

Todos usam a mesma árvore de teste, uma estrutura de pastas:

```
projeto
  src
    main.cpp
    estruturas
      lista.cpp
      pilha.cpp
  docs
    manual.pdf
  README.md
```

## Pontos de atenção

Na versão com vetor, o caso base de quase tudo é um nó sem filhos: o `for`
simplesmente não executa. Não é preciso testar `filhos.size() == 0`.

Na versão com primogênito e irmão, o pai só conhece o primeiro filho. Para
chegar aos outros é preciso andar pelo `proximoIrmao`, como numa lista
encadeada.

Em `contarFilhos`, conte apenas os filhos diretos. Netos não entram.

Em `buscarCaminho`, cada chamada recebe o caminho percorrido até o pai e
acrescenta o próprio nome antes de passar adiante.

No desafio, a recursão sempre desce até o fundo antes de passar ao irmão. Para
imprimir nível por nível, quem decide a ordem é a fila.

## Compilador

Os arquivos usam `nullptr` e o `for` de intervalo, que exigem C++11. No
Code::Blocks, em Settings, Compiler, ative `-std=c++11`.

## Entrega

Por pull request, no repositório de entregas, dentro da sua pasta:

```
seu-nome/aula-11-arvores-n-arias/
```
