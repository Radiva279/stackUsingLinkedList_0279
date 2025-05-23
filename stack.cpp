#include <iostream>
using namespace std;

// Node class reperesenting a single node in the linked list
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

// Stack class
class Stack
{
private:
    Node *top; // Pointer to the top node of the stack

public:
    Stack()
    {
        top = NULL; // Initialize the stack with a null top pointer
    }

    // Push opertaion: Insert an element onto the top of the stack
    int push(int value)
