#include <iostream>

using namespace std;

class Node // node class for generating node.
{
public:
    int data;   // it stores data which is integer value
    Node *next; // it declares the next node
};

class Stack // stack class for create stack nodes
{
    Node *head; // it declares the head node
    Node *top;  // it declares the top node

public:
    Stack() // constructor of Stack class
    {

        head = NULL;
        top = NULL;
    }

    void push(int value) // push the value to the stack
    {
        Node *newNode = new Node(); // new node will be added to the stack

        if (top == NULL) // initialize the top and head node of the stack
        {
            top = newNode;
            head = newNode;
        }
        else
        {
            top->next = newNode;
            top = newNode;
        }
        newNode->data = value;
        newNode->next = NULL;
    }

    void pop() // pop the value from the stack
    {

        Node *temp = head; // it declares the stack of the head node
        if (head == top)   // if there is one node in the stack
        {
            head = NULL;
            top = NULL;
        }
        else
        {
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            top = temp;
            temp->next = NULL;
        }
    }

    int getTop() // top data of the stack
    {
        Node *temp = top;

        if (temp == NULL)
            return 0;
        else
            return temp->data;
    }

    int size() // size of the stack
    {
        Node *temp = head;
        int counter = 0;
        while (temp != NULL)
        {
            ++counter;
            temp = temp->next;
        }

        return counter;
    }
    bool isEmpty() // true if the stack is empty
    {
        if (top == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    Stack *concat(Stack *stackList1, Stack *stackList2) // concat the stack lists together into a single stack list with the stack lists.
    {
        Stack *tempStack = new Stack();    // temp stack to store concating lists
        Stack *reverseStack = new Stack(); // reverse stack of the temp stack stack

        while (!stackList1->isEmpty() && !stackList2->isEmpty())
        {
            if (stackList1->getTop() > stackList2->getTop())
            {
                tempStack->push(stackList2->getTop());
                stackList2->pop();
            }
            else
            {
                tempStack->push(stackList1->getTop());
                stackList1->pop();
            }
        }

        if (!stackList1->isEmpty())
        {
            while (!stackList1->isEmpty())
            {
                tempStack->push(stackList1->getTop());
                stackList1->pop();
            }
        }
        else
        {
            while (!stackList2->isEmpty())
            {
                tempStack->push(stackList2->getTop());
                stackList2->pop();
            }
        }

        // this while loop for reverse the temp stack.
        while (!tempStack->isEmpty())
        {
            reverseStack->push(tempStack->getTop());
            tempStack->pop();
        }

        return reverseStack;
    }
};

int main()
{
    Stack *stackList1 = new Stack(); // first stack
    Stack *stackList2 = new Stack(); // second stack
    Stack *newStack = new Stack();   // new stack for concat other stacks

    // first stack :
    stackList1->push(8); //   | 1 | <- top
    stackList1->push(6); //   | 2 |
    stackList1->push(4); //   | 4 |
    stackList1->push(2); //   | 6 |
    stackList1->push(1); //   | 8 |

    // second stack:
    stackList2->push(10); //  | 1 | <- top
    stackList2->push(8);  //  | 3 |
    stackList2->push(3);  //  | 8 |
    stackList2->push(1);  //  | 10 |

    newStack = newStack->concat(stackList1, stackList2); // concate first stack and second stack.

    cout << " =================================================================" << endl;

    cout << "Stack size is :" << newStack->size() << endl;            // print size of new stack
    cout << "Top value of the stack :" << newStack->getTop() << endl; // print top value of new stack

    newStack->isEmpty() ? cout << "Stack is empty" << endl : cout << "Stack is not empty" << endl; // check stack wheter is empty or not.

    cout << "--- Created Stack ---" << endl;

    // print the whole elements in array by pop the top value of the stack
    cout << "| " << newStack->getTop() << " | <-- top" << endl; // I just want to print the top text top of the stack. It is not important.
    newStack->pop();

    while (!newStack->isEmpty())
    {
        cout << "| " << newStack->getTop() << " |" << endl;
        newStack->pop();
    }
    cout << " =================================================================" << endl;

    return 0;
};