// ============================================================
// primos.h - tabela de primos usada nas funcoes hash do livro
// Inclua com:  #include "primos.h"
// ============================================================

#ifndef PRIMOS_H
#define PRIMOS_H

#include <cctype>

// Devolve o primo associado a letra. a=2, b=3, c=5, d=7, e=11 ...
int primo(char c) {
    int tabela[26] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
                      43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
    return tabela[tolower(c) - 'a'];
}

#endif
