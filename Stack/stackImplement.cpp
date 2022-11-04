#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class stackImplement
{
    Node *head;
    Node *top;

public:
    stackImplement()
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

    int getTop()
    {
        Node *temp = top;
        if (temp != NULL)
        {
            return temp->data;
        }
        return 0;
    }

    int size()
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
    bool isEmpty()
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
};

int main()
{
    stackImplement *stackList = new stackImplement();
    stackList->push(10);
    stackList->push(15);
    stackList->push(17);
    stackList->pop();
    stackList->pop();
    stackList->pop();

    cout << stackList->getTop() << endl;
    cout << stackList->size() << endl;
    cout << stackList->isEmpty() << endl;
    return 0;
};