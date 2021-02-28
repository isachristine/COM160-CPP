#include <iostream>

using namespace std;

void modifica_vetor_sintaxe_1(int b[], int num_elem) {
    for (int i = 0; i < num_elem; i++) {
        b[i] = b[i] * 2;
    }
}

void modifica_vetor_sintaxe_2(int *b, int num_elem) {
    for (int i = 0; i < num_elem; i++) {
        b[i] = b[i] * 2;
    }
}

void vetor_const_sintaxe_1(const int b[], int num_elem) {
    // Corpo sem alterar os elementos do vetor
}

void vetor_const_sintaxe_2(const int *b, int num_elem) {
    // Corpo sem alterar os elementos do vetor
}

const int num_elem = 10;

int main() {
    // Alocacao estática:
    int est[num_elem] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Alocacao dinâmica:
    int *din = new int[num_elem];
    for (int i = 0; i < num_elem; i++) {
        din[i] = i + 1;
    }

    modifica_vetor_sintaxe_1(est, num_elem);
    modifica_vetor_sintaxe_2(est, num_elem);

    modifica_vetor_sintaxe_1(din, num_elem);
    modifica_vetor_sintaxe_2(din, num_elem);

    for (int i = 0; i < num_elem; i++) {
        cout << i << " : " << est[i] << " , " << din[i] << endl;
    }

    return 0;
}