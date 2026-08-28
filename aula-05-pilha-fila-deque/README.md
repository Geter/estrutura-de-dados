# Aula 05 - Pilha, Fila e Deque

Exercícios da aula de 21 de agosto de 2026.

Os dados ficam em um array comum. O que controla quantos elementos estão em uso
é um índice guardado junto, dentro da struct.

| Arquivo | O que fazer | Saída esperada |
|---|---|---|
| `exercicio1_array.cpp` | Array com índice de controle | `3 30` |
| `exercicio2_pilha.cpp` | Funções `push`, `pop`, `top` e `isEmpty` | `30 20 10` |
| `exercicio3_fila.cpp` | Funções `enqueue`, `dequeue`, `front` e `isEmpty` | `10 20 30` |
| `exercicio4_stl.cpp` | Refazer os dois anteriores com `stack` e `queue` | `30 20 10` e `10 20 30` |
| `exercicio5_parenteses.cpp` | Verificador de parênteses com `stack<char>` | `correto` e `incorreto` |
| `exercicio6_atendimento.cpp` | Atendimento prioritário com `deque<string>` | Elena, Carla, Ana, Bruno, Diego |

Faça na ordem. Cada exercício se apoia no anterior.

## Pontos de atenção

O índice `topo` indica a próxima posição livre. O valor que está no topo da pilha
fica uma posição antes, em `itens[topo - 1]`.

Na fila, `inicio` aponta direto para o próximo a sair, sem o menos um.

O `pop` não apaga nada. O valor continua gravado no array, mas a posição passa a
ser considerada livre e será sobrescrita na próxima inserção.

Os índices precisam começar em zero antes da primeira inserção.

O `&` em `Pilha& pilha` faz a função receber a pilha original. Sem ele, a função
trabalha sobre uma cópia e a alteração se perde ao retornar.

Na STL, `isEmpty` se chama `empty`, e na `queue` a inserção se chama `push` e
não `enqueue`.
