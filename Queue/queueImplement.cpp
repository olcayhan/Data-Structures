#include <iostream>

using namespace std;

class Node // node class for generating node.
{
public:
    int data;   // it stores data which is integer value
    Node *next; // it declares the next node
};

class Queue // queue class for create queue nodes
{

    Node *front; // it declares the front node
    Node *tail;  // it declares the tail node

public:
    Queue() // constructor of Queue class
    {
        front = NULL;
        tail = NULL;
    }

    void enqueue(int data) // enqueue the value to the queue
    {
        Node *newNode = new Node(); // new node will be added to the queue

        if (front == NULL) // initialize the front of the queue
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

    void dequeue() // dequeue the value from the queue
    {
        Node *temp = tail; // it declares the tail node of the queue

        if (front == tail) // if there is one node in the stack
        {
            front = NULL;
            tail = NULL;
        }
        else
        {
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            front = temp;
            front->next = NULL;
        }
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

    bool isEmpty()
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }

    int getFront()
    {
        return front != NULL ? front->data : -1; // this method is integer because of that if front is NULL then return -1
    }

    int getTail()
    {
        return tail != NULL ? tail->data : -1; // this method is integer because of that if front is NULL then return -1
    }

    void print()
    {
        Node *temp = tail;

        cout << "\t[ ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "]" << endl;
    }

    int findMaxValue()
    {
        Node *temp = tail;

        int max = -2147483648; // user may enter the integer less than 0
        while (temp != NULL)
        {
            if (max <= temp->data)
                max = temp->data;

            temp = temp->next;
        }
        return max;
    }
};

int main()
{
    Queue *queueList = new Queue();

    queueList->enqueue(25); //
    queueList->enqueue(12); //
    queueList->enqueue(14); //
    queueList->enqueue(5);  //   tail             front
    queueList->enqueue(7);  //    |                 |
    queueList->enqueue(18); // [ 18  7  5  14  12  25 ]

    cout << "=============== Queue Implement =================\n"
         << endl;
    queueList->print();
    cout << "\tFront value : " << queueList->getFront() << endl;
    cout << "\tTail value : " << queueList->getTail() << endl;
    cout << "\tSize of Queue : " << queueList->size() << endl;
    queueList->isEmpty() ? cout << "\tQueue is Empty" << endl : cout << "\tQueue is Not Empty" << endl;

    cout << "\tMax Value of Queue : " << queueList->findMaxValue() << endl;
    cout << "\n=================================================" << endl;

    return 0;
};