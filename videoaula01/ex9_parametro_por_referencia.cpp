#include <iostream>

using namespace std;

void troca_por_valor(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 2;
    int b = 3;
    cout << "Antes a = " << a << " e b = " << b << endl;
    troca_por_valor(a, b);
    cout << "Depois a = " << a << " e b = " << b;
    return 0;
}