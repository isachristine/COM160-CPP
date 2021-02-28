#include <iostream>

using namespace std;

void valor_alocado_memoria(int *p) {
    p = new int;
    *p = 7;
}

void valor_modificado_memoria(int *p) {
    *p = 8;
    // O local de memória que p aponta terá seu valor alterado para 8.
}

void referencia(int *&p) {
    p = new int;
    *p = 9;
    // O ponteiro p apontará para outro local na memória e como foi 
    // passado como referência, com uso do operador &, esse local 
    // também será alterado fora da função.
}

int main() {
    // Dados valores para as variáveis:
    int a = 1;
    int b = 2;
    int c = 3;
    // Colocando as variáveis em endereços de memória:
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;

    cout << endl << endl;
    cout << "ANTES DAS FUNCOES: " << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "Endereco de memoria p1: " << p1 << endl;
    cout << "Valor apontado pelo ponteiro p1: " << *p1 << endl;
    cout << "Valor da variavel A: " << a << endl;
    cout << endl;
    cout << "Endereco de memoria p2: " << p2 << endl;
    cout << "Valor apontado pelo ponteiro p2: " << *p2 << endl;
    cout << "Valor da variavel B: " << b << endl;
    cout << endl;
    cout << "Endereco de memoria p3: " << p3 << endl;
    cout << "Valor apontado pelo ponteiro p3: " << *p3 << endl;
    cout << "Valor da variavel C: " << c << endl;
    cout << endl;

    valor_alocado_memoria(p1);
    valor_modificado_memoria(p2);
    referencia(p3);

    cout << endl << endl;
    cout << "DEPOIS DAS FUNCOES: " << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "Endereco de memoria p1: " << p1 << endl;
    cout << "Valor apontado pelo ponteiro p1: " << *p1 << endl;
    cout << "Valor da variavel A: " << a << endl;
    cout << "A Funcao valor alocado memoria nao muda o endereco de memoria, nem o valor apontado pelo ponteiro, nem a variavel de A." << endl;
    cout << endl;
    cout << "Endereco de memoria p2: " << p2 << endl;
    cout << "Valor apontado pelo ponteiro p2: " << *p2 << endl;
    cout << "Valor da variavel B: " << b << endl;
    cout << "A Funcao valor modificado memoria nao muda o endereco de memoria, mas muda o valor apontado pelo ponteiro e a variavel de B." << endl;
    cout << endl;
    cout << "Endereco de memoria p3: " << p3 << endl;
    cout << "Valor apontado pelo ponteiro p3: " << *p3 << endl;
    cout << "Valor da variavel C: " << c << endl;
    cout << "A Funcao referencia muda o endereco de memoria de p3, muda o valor apontado pelo ponteiro (ja que agora esta apontando para outro espaco de memoria), porem nao altera a variavel de C." << endl;
    cout << endl;

    return 0;
}