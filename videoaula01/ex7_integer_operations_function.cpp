#include <iostream>

using namespace std;

int sum(int n1, int n2){
   return n1 + n2;
}

int sub(int n1, int n2){
    return n1 - n2;
}

int mul(int n1, int n2){
    return n1 * n2;
}

int idiv(int n1, int n2){
    return n1 / n2;
}

float fdiv(int n1, int n2){
    return (float)n1 / (float)n2;
}

int res(int n1, int n2){
    return n1 % n2;
}

int main () {
    int n1;
    int n2;

    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;

    cout << "Soma: " << sum(n1, n2) << endl;
    cout << "Subtracao: " << sub(n1, n2) << endl;
    cout << "Multiplicacao: " << mul(n1, n2) << endl;
    cout << "Divisao inteira: " << idiv(n1, n2) << endl;
    cout << "Divisao real: " << fdiv(n1, n2) << endl;
    cout << "Resto da divisao: " << res(n1, n2);

    return 0;
}