#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node()
    {
        next = NULL; //mengatur pointer next menjadi NULL
    }
};

class stack
{
private: 
    Node* top; //pointer to the top node of the stack
public:
    stack()
    {
        top = NULL; //iniatialize the stuck with a null top pointer
    }

    //push operation: insert an element onto the top of the stack
    int push(int value)
    {
        Node* newNode = new Node(); //1. allocate memory for the new node
        newNode->data = value; //2. assign value
        newNode->next = top; //3. step the next pointer of the new node to the current top node
        top = newNode; //4. update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
    }

    //pop operation: remove the topmost element from the stack:
    void pop() 
    {
        if (isEmpty()) { //step 1
			cout << "Stack is empty."; //step 1a
		}
        cout << "Popped value: " << top->data << endl; //step2
        top = top->next; //step 3: update the top pointer to the next node
    }

    //peek/top operation: retrieve the value of the topmost element without removing it
    void peek() {
        if (top == NULL) {
            cout << "List is empty." << endl;
        }
        else {
            Node* current = top;
            while (current != NULL) {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }
}