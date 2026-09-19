#include <iostream>
#include <string>
#include <functional>
using namespace std;

int hashReal(string texto) {
    return hash<string>{}(texto) % 10;
}

int main() {
    string livros[3] = {"Maus", "Fun Home", "Watchmen"};

    for (string livro : livros) {
        cout << livro << " " << hashReal(livro) << endl;
    }

    return 0;
}
