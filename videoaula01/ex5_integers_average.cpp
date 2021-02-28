#include <iostream>

using namespace std;

// O usuario ira digitar varios numeros
// o programa vai parar quando o usuario 
// digitar 0. Dai fara a media entre os 
// valores digitados.

int main() {
    int n;
    int counter = 0;
    int sum = 0;

    do {
        cout << "Digite um numero ou 0 para finalizar: ";
        cin >> n;
        sum += n;
        counter++;
    } while (n != 0);

    float average = (float)sum / (float)(counter - 1);
    cout << "A media dos numeros digitados e: " << average;

    return 0;
}