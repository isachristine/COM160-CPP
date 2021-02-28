#include <iostream>

using namespace std;

int main() {

    int c[10] = {14, 0, 3};
    // Isso quer dizer que criei um vetor com
    // 10 espaços de memória, 0-9, com os 3
    // primeiros locais da memória já com valores.

    for (int i = 0; i < 10; i++) {
        cout << "c[" << i << "] = " << c[i] << endl;
    }

    cout << "Observe que os valores 14, 0 e 3 estao nas primeiras posicoes." << endl;
    cout << "Como nao foram declarados, as demais posicoes receberam 0 por padrao." << endl;
    cout << "Agora vamos incluir valores nas posicoes 5, 7 e 8..." << endl;;

    c[5] = 30;
    c[7] = 40;
    c[8] = 50;

    for (int i = 0; i < 10; i++) {
        cout << "c[" << i << "] = " << c[i] << endl;
    }

    int p3, p4, p6, p9;

    cout << "Agora sua vez de inserir valores nas demais posicoes!" << endl;
    cout << "Valor da posicao 3: ";
    cin >> p3;
    c[3] = p3;
    cout << "Valor da posicao 4: ";
    cin >> p4;
    c[4] = p4;
    cout << "Valor da posicao 6: ";
    cin >> p6;
    c[6] = p6;
    cout << "Valor da posicao 9: ";
    cin >> p9;
    c[9] = p9;

    for (int i = 0; i < 10; i++) {
        cout << "c[" << i << "] = " << c[i] << endl;
    }

    cout << "That's all Folks! rsrs..";

    return 0;

}