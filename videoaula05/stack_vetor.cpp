#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack()
{
    // Length = 0 porque começamos sem nada na pilha.
    length = 0;
    // Criamos no arquivo stack.h o ponteiro chamado structure.
    // Aqui estamos alocando dinamicamente ocom uso da palavra 
    // reservada new. "Isso faz a alocação dinâmica do vetor, 
    // dentro do construtor."
    structure = new ItemType[MAX_ITEMS];
}

Stack::~Stack()
{
    // Deletar o array
    delete [] structure;
}

bool Stack::isEmpty() const
{
    // Se o lengTh for igual a zero, é porque o vetor está vazio.
    // Retorna verdadeiro se estiver vazio - TRUE
    // Retorna falso se estiver com ao menos 1 item - FALSE
    return (length == 0);
}

bool Stack::isFull() const
{
    // Se o lengTh for igual ao número máximo, é porque o vetor 
    // está cheio.
    // Retorna verdadeiro se estiver cheio - TRUE
    // Retorna falso se estiver com ao menos itens que o valor
    // máximo que o length pode chegar - FALSE
    return (length == MAX_ITEMS);
}

void Stack::push(ItemType item)
{
    if (!isFull()) {
        // Se não estiver cheio, coloque o elemento na 
        // posição structure[length]
        structure[length] = item;
        // Depois aumente o tamanho do length.
        length++;
    } else {
        // Lançando um erro:
        throw "Stack is already full!";
    }
}

ItemType Stack::pop() 
{
    if (!isEmpty()) {
        // Usando structure na posição length -1, teremos
        // o último elemento da pilha. Assim, adicione esse
        // elemento na variável aux
        ItemType aux = structure[length - 1];
        // Remova um elemento, decrementando o length.
        length--;
        // Retorne o valor excluído da pilha.
        return aux;        
    } else {
        // Se estiver vazio, lance um erro
        throw "Stack is empty!";
    }
}

void Stack::print() const
{
    cout << "Pilha = ";
    for (int i = 0; i < length; i++) {
        cout << structure[i];
    }
    cout << endl;
}