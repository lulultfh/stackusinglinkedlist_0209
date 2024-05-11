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

    }
};