#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
    Node *head;
    Node *top;

public:
    LinkedList()
    {

        head = NULL;
        top = NULL;
    }

    void push(int val)
    {
        Node *newNode = new Node();

        if (top == NULL)
        {
            top = newNode;
            head = newNode;
        }
        else
        {
            top->next = newNode;
            top = newNode;
        }
        newNode->data = val;
        newNode->next = NULL;
    }

    void pop()
    {

        Node *temp = head;
        if (head == top)
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

    void getTop()
    {
        Node *temp = top;
        if (temp != NULL)
        {
            cout << "top element of stack : " << temp->data << endl;
        }
    }

    void printAll()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
    void size()
    {
        Node *temp = head;
        int counter = 0;
        while (temp != NULL)
        {
            ++counter;
            temp = temp->next;
        }

        if (temp != NULL)
        {
            cout << "size of stack : " << counter << endl;
        }
        else
        {
            cout << "stack is empty" << endl;
        }
    }
    void isEmpty()
    {
        if (top == NULL)
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }
};

int main()
{
    LinkedList *list = new LinkedList();
    list->push(10);
    list->push(15);
    list->push(17);
    list->pop();
    list->pop();
    list->pop();

    list->getTop();
    // list->printAll();
    list->size();
    list->isEmpty();
    return 0;
};