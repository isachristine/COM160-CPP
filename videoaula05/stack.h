#include "itemtype.h"

const int MAX_ITEMS = 100;
// Garantirá que o vetor tenha no máximo 100 espaços

class Stack {
    public:
        Stack(); // Constructor
        ~Stack(); // Destructor
        bool isEmpty() const;
        bool isFull() const;
        void print() const;
        void push(ItemType);
        ItemType pop();

    private:
        int length;
        ItemType * structure;
};