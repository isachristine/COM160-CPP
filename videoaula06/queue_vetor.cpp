#include <iostream>
#include "queue.h"

using namespace std;

Queue::Queue() 
{
    front = 0;
    back = 0;
    // Cria o vetor de tipo fila
    structure = new ItemType[MAX_ITEMS];
}

Queue::~Queue() {
    delete [] structure;
}

bool Queue::isEmpty() const 
{
    return (front == back);
}

bool Queue::isFull() const 
{
    return (back - front == MAX_ITEMS);
}

void Queue::enqueue(ItemType item) 
{
    if (!isFull()) {
        // Se o vetor não estiver cheio, coloque o item
        // na posição back feito o resto da divisão pelo
        // número total de espaços do vetor, para que seja
        // feita alocação circular.
        structure[back % MAX_ITEMS] = item;
        back++;
    } else {
        throw "Queue is already full!";
    }
}

ItemType Queue::dequeue()
{
    if (!isEmpty()) {
        // Se não estiver vazio, obtenha a posição para a
        // qual o front está apontando e incremente uma
        // posição. Se imaginarmos uma fila, é como pedir
        // que a pessoa que está na fila dê um passo, para
        // que a próxima possa ocupar aquele lugar.
        front++;
        // Aloque o item na posição front - 1.
        return structure[(front-1) % MAX_ITEMS];
    } else {
        throw "Queue is empty!";
    }
}

void Queue::print() const 
{
    cout << "Fila = ";
    for (int i = front; i < back; i++) {
        cout << structure[i % MAX_ITEMS];
    }
    cout << endl;
}