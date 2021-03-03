#include "itemtype.h"

const int MAX_ITEMS = 100;

class Queue {
    public:
        Queue(); // Constructor
        ~Queue(); // Destructor
        bool isEmpty() const;
        bool isFull() const;
        void print() const;

        void enqueue(ItemType); // adicionar elemento que veio por parâmetro
        ItemType dequeue();

    private:
        int front;
        int back;
        ItemType * structure; // vetor, a fila.
};