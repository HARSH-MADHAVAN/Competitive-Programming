#include <iostream>
#include"Node.h"
template<typename T>

class Linked_List {
    public:
        void InsertAtHead(node<t>*head, intd){
            node<T> *n = new node<T>(d);
            n->next = head;
            head = n;
        }
};