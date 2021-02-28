#include <iostream>

int main() {
    int num1;
    int num2;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;

    int sum = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
    int div = num1 / num2;
    float fdiv = (float)num1 / (float)num2;
    int res = num1 % num2;

    std::cout << "A soma e " << sum << std::endl;
    std::cout << "A subtacao e " << sub << std::endl;
    std::cout << "A multiplicacao e " << mul << std::endl;
    std::cout << "A divisao inteira e " << div << std::endl;
    std::cout << "A divisao real e " << fdiv << std::endl;
    std::cout << "O resto da divisao e " << res << std::endl;

    return 0;
}