#include <iostream>

int main() {
    int n1;
    int n2;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> n1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> n2;

    if (n1 == n2) {
        std::cout << n1 << " e igual a " << n2 << std::endl;
    }

    if (n1 != n2) {
        std::cout << n1 << " e diferente de " << n2 << std::endl;
    } 

    if (n1 > n2) {
        std::cout << n1 << " e maior que " << n2 << std::endl;
    }

    if (n1 < n2) {
        std::cout << n1 << " e menor que " << n2 << std::endl;
    }

    return 0;
}