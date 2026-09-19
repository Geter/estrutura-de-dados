# Aula 07 - Recursão

Lista de exercícios da aula de 4 de setembro de 2026.

São 14 exercícios em ordem crescente de dificuldade. O apoio nos comentários
diminui ao longo da lista: os primeiros indicam o que precisa existir em cada
bloco, os últimos trazem apenas o enunciado e a assinatura da função.

## Exercícios

| Arquivo | O que fazer | Saída esperada |
|---|---|---|
| `exercicio01_contagem_regressiva.cpp` | Imprimir de n até 1 | `5 4 3 2 1` |
| `exercicio02_contagem_crescente.cpp` | Imprimir de 1 até n | `1 2 3 4 5` |
| `exercicio03_soma_ate_n.cpp` | Somar de 1 até n | `15` |
| `exercicio04_fatorial.cpp` | Fatorial de n | `120` |
| `exercicio05_potencia.cpp` | Base elevada ao expoente | `256` |
| `exercicio06_soma_vetor.cpp` | Somar os elementos do vetor | `108` |
| `exercicio07_maior_elemento.cpp` | Maior valor do vetor | `42` |
| `exercicio08_contar_ocorrencias.cpp` | Quantas vezes o valor aparece | `4` |
| `exercicio09_inverter_string.cpp` | Inverter a string | `oasrucer` |
| `exercicio10_palindromo.cpp` | Verificar se é palíndromo | `1 0` |
| `exercicio11_fibonacci.cpp` | N-ésimo número de Fibonacci | `55` |
| `exercicio12_busca_binaria_recursiva.cpp` | Busca binária sem `while` | `5 -1` |
| `exercicio13_mdc.cpp` | Máximo divisor comum | `6` |
| `exercicio14_hanoi.cpp` | Torres de Hanói | sete movimentos |

Faça na ordem. Os arquivos já compilam antes de você resolver, então dá para
rodar e conferir a cada passo.

## As duas perguntas de toda recursão

Qual é o caso mais simples, que eu sei responder de imediato? Esse é o caso base.

Como transformar o caso maior em um caso menor do mesmo problema? Essa é a
chamada recursiva.

## Pontos de atenção

Sem caso base a recursão não termina e o programa trava.

A ordem das linhas importa. Imprimir antes da chamada mostra o valor na ida.
Imprimir depois mostra na volta, com a ordem invertida. Compare os exercícios
01 e 02.

No exercício 07, o caso base é um vetor de **um** elemento, e não de zero. O
maior de um vetor vazio não existe.

Nos exercícios 10 e 11 há mais de um caso base.

## Entrega

Duas entregas para esta lista.

O código vai para o repositório de entregas, por pull request. O passo a passo
está no arquivo GUIA_PULL_REQUEST.md, na raiz daquele repositório.

A lista também deve ser copiada à mão e entregue em sala.
