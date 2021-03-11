#include "nodetype.h"

class Queue_enc {
    public:
        Queue_enc(); // Construtor
        ~Queue_enc(); // Destrutor
        bool isEmpty() const;
        bool isFull() const;
        void print() const;
        void enqueue(ItemType); // Adicionar elementos
        ItemType dequeue(); // Remover elementos

    private:
        NodeType * front; // Ponteiro do começo
        NodeType * rear; // Ponteiro do fim
};