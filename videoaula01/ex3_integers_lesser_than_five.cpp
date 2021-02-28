#include <iostream>

using namespace std;

int main() {

    int n;
    int amount = 0;
    int counter = 1;

    while (counter < 11) {

        cout << "Digite o " << counter << "o numero: ";
        std::cin >> n;

        if (n < 5) {
            amount++;
        }
        counter++;
    }
    
    cout << "Quantidade de numeros menores que 5: " << amount << endl;

    return 0;
}