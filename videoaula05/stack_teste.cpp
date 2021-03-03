#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    ItemType character; // Variável do tipo char
    Stack stack; // Declarar a pilha
    ItemType stackItem; 

    cout << "Adicione uma string, ou enter para finalizar: " << endl;
    cin.get(character);

    // Se não for uma quebra de linha, incluir na pilha
    while (character != '\n')
    {
        stack.push(character);
        cin.get(character);
    } ;
    
    cout << "Empilhando caracteres......." << endl;
    cout << "Agora vamos desempilhar!" << endl;

    // Enquanto essa instância de pilha stack não estiver
    // vazia, vá deletando os itens.
    while (!stack.isEmpty()) 
    {
        stackItem = stack.pop();
        cout << stackItem;
    }
    
}