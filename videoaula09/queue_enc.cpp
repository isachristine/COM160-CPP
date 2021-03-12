#include <iostream>
#include <new> // Para bad_alloc
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
    // Primeiro, para adicionar itens na fila, precisamos saber se
    // ela está cheia. Se não estiver...
    if (!isFull()) {
        // Pensar que vamos começar incluindo final
        NodeType * newNode;
        newNode = new NodeType;
        newNode -> info = item; 
        // fazemos o nó receber a informação passada pelo parâmetro item
        newNode -> next = NULL;
        // Fazemos o novo nó apontar para nulo como próximo.
        // Isso porque, como estamos alocando no fim da fila, não haverá
        // itens para esse novo nó apontar.
        if (rear == NULL) 
            // Se não houver uma fila, é porque não tinha elementos nela, 
            // Então precisamos fazer com que o front aponte para o novo
            // nó, pois ele também será o começo (já que é o primeiro 
            // elemento dessa fila)
            front = newNode;
        else 
            // Como existe uma lista e criamos um novo nó, o fim da fila
            // precisa apontar para ele, afinal, ele virou o fim da fila.
            rear -> next = newNode;
            rear = newNode;
    }
    else {
        throw "Queue is already full!";
    }
}

ItemType Queue_enc::dequeue() 
{
    if (!isEmpty()) {
    // Se não estiver vazio...
    // Precisamos deletar o elemento que o front está apontando.
    // Criamos um ponteiro temporário
    NodeType * pontTemp;
    // Fazemos o ponteiro apontar para o bloco no front.
    pontTemp = front;
    // Aí precisamos criar um itemtype para armazenar o valor
    // que consta na memomória e fazer com que esse item receba
    // o dado apontado pelo ponteiro front.
    // Armazenamos isso numa var separada, pra podermos dar ela
    // como retorno ao fim do dequeue.
    ItemType item = front -> info;
    // Depois apontamos o front para o próximo bloco na fila.
    front = front -> next;
    if (front == NULL) 
        // Se o ponteiro da frente for nulo, sabemos que era o 
        // último item da fila. Então precisamos fazer com que
        // o rear também aponte para nulo.
        rear = NULL;
    delete pontTemp;
    return item;
    } else {
        throw "Queue is empty!";
    }
}

void Queue_enc::print() const {
    // Criamos um ponteiro temporário recebendo o bloco de front.
    NodeType * pontTemp = front;
    // Enquanto o ponteiro temporário for diferente de nulo é 
    // porque ainda há itens dentro da nossa fila, então segue
    // imprimindo.
    while (pontTemp != NULL) {
        cout << pontTemp -> info; // imprime a info do ponteiro
        pontTemp = pontTemp -> next; // Aponta para o próximo       
    }
    cout << endl;
}