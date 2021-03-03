#include <iostream>
#include "queue.h"

using namespace std;

int main() {
    char character;
    Queue queue;
    char queueChar;

    cout << "Adicione uma String: " << endl;
    cin.get(character); // Pega o caractere
    
    // Se o caracter não for quebra de linha e se a fila 
    // não estiver cheia...
    while (character != '\n' && !queue.isFull())
    {
        // Adicione o caracter na fila.
        queue.enqueue(character);
        // Peça outro caractere
        cin.get(character);
    }

    // Enquanto a fila não estiver vazia...
    while (!queue.isEmpty())
    {
        // Pegue o caracter que estiver no início da fila
        // E coloque ele na variável queueChar, depois 
        // remova da fila
        queueChar = queue.dequeue();
        // Imprima o caractere removido.
        cout << queueChar;
    }
    cout << endl;

}