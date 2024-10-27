#include <iostream>
using namespace std;

// if we don't know the input type
// we use template 
template <typename T> 

class node{

    public:
        T data;
        node *next;

        // Default constructor
        node() {}

        // Parametrized constructor
        node(T d){
            next = NULL;
            this->data = data;
        }

        void Print(node<T>*&head){
            while (head != NULL){
                cout << head->data << "==>";
                head = head->next;
            }
        }

};