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
        
    }
};