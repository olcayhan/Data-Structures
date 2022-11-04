#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class QueueImplement
{

    Node *front;
    Node *tail;

public:
    QueueImplement()
    {
        front = NULL;
        tail = NULL;
    }

    int size()
    {
        Node *temp = tail;
        int counter = 0;
        while (temp != NULL)
        {
            counter += 1;
            temp = temp->next;
        }

        return counter;
    }

    bool empty()
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }

    void push(int data)
    {
        Node *newNode = new Node();

        if (front == NULL)
        {
            front = newNode;
            newNode->next = NULL;
        }
        else
        {
            newNode->next = tail;
        }
        tail = newNode;
        newNode->data = data;
    }

    void pop()
    {
        Node *temp = tail;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }

    int getFront()
    {
        return front->data;
    }

    int getBack()
    {
        return tail->data;
    }
};

int main()
{
    QueueImplement *queueList = new QueueImplement();

    queueList->push(10);
    queueList->push(20);
    queueList->push(30);
    queueList->pop();
    cout << queueList->getFront() << endl;
    cout << queueList->getBack() << endl;
    cout << queueList->size() << endl;
    cout << queueList->empty() << endl;

    return 0;
};