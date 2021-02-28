#include <iostream>

using namespace std;

const int num_elem = 10;
// Criado "num_elem" ou número de elementos como uma 
// constante "const" para que o tamanho do vetor não
// seja confundido no meio do código.

int main() {

    int c[num_elem];

    for (int i = 0; i < num_elem; i++) {
        c[i] = 2 * i;
    }

    for (int i = 0; i < num_elem; i++) {
        cout << "c[" << i << "] = " << c[i] << endl;
    } 

    return 0;
}