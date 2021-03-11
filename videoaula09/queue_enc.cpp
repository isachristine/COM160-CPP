#include <iostream>
#include <new>
#include <cstddef> // Para funcionar o NULL
#include "queue_enc.h"

using namespace std;

Queue_enc::Queue_enc() {
    front = NULL;
    rear = NULL;
}

Queue_enc::~Queue_enc() {
    // Criar ponteiro temporário
    NodeType * pontTemp;
    // Se o ponteiro da frente for diferente de nulo, 
    // significa que ainda há elementos a remover.
    while (front != NULL) {
        pontTemp = front;
        front = front -> next;
        // Por fim podemos desalocar a memória para a qual o 
        // ponteiro temporário estava apontando.
        delete pontTemp;
    } 
    rear = NULL;
}

bool Queue_enc::isEmpty() const {
    return (front == NULL);
    // Assumimos que se o front estiver nulo, o
    // rear também estará e assim, não há itens na fila.
}

bool Queue_enc::isFull() const {
    // Criamos um ponteiro de teste, location.
    NodeType * location;
    try
    {
        location = new NodeType; 
        // Se conseguir fazer isso, é porque ainda há
        // espaço na fila.
        // Por fim podemos desalocar a memória para a 
        // qual o ponteiro location estava apontando.
        delete location; 
        return false;
    }
    catch(bad_alloc exception)
    {
        return true;
    }
        
}

void Queue_enc::enqueue(ItemType item) {
    // Pensar que vamos começar incluindo final
    NodeType * newNode;
    newNode -> info = item; 
    // fazemos o nó receber a informação passada pelo parâmetro item
    newNode -> next = NULL;
    // Isso porque, como estamos alocando no fim da fila, não haverá
    // itens para esse novo nó apontar.
    if (rear == NULL) {
        // Se não houver uma fila, é porque não tinha elementos nela, 
        // Então precisamos fazer com que o front aponte para o novo
        // nó, pois ele também será o começo (já que é o primeiro 
        // elemento dessa fila)
        front -> next = newNode;
    } else {
        // Como existe uma lista e criamos um novo nó, o fim da fila
        // precisa apontar para ele, afinal, ele virou o fim da fila.
        rear -> next = newNode;
    }
}

ItemType dequeue() {

}

void Queue_enc::print() const {
    // Criamos um ponteiro temporário
    NodeType * pontTemp;
    // Enquanto o ponteiro temporário for diferente de nulo é 
    // porque ainda há itens dentro da nossa fila, então segue
    // imprimindo.
    while (pontTemp != NULL) {
        cout << pontTemp -> info; // imprime a info do ponteiro
        pontTemp = pontTemp -> next; // Aponta para o próximo       
    }
    cout << endl;
}

/*
Queue_enc(); // Construtor
        ~Queue_enc(); // Destrutor
        bool isEmpty() const;
        bool isFull() const;
        void print() const;
        void enqueue(ItemType); // Adicionar elementos
        ItemType dequeue(); // Remover elementos
*/