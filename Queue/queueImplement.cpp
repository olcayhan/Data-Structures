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

    int getFront() // front data of the queue
    {
        return front != NULL ? front->data : -1; // this method is integer because of that if front is NULL then return -1
    }

    int size()
    {
        Node *temp = tail; // size of the queue
        int counter = 0;
        while (temp != NULL)
        {
            counter += 1;
            temp = temp->next;
        }

        return counter;
    }

    bool isEmpty() // true if the queue is empty
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }

    void print() // print the queue
    {
        Node *temp = tail; // temp node that is indicate tail node

        cout << "\t[ "; // some styling :)
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "]" << endl; // some styling :)
    }

    int findMaxValue() // returns the maximum value int the queue
    {

        int max = -2147483648; // user may enter the integer less than 0
        while (!isEmpty())
        {
            if (max < getFront()) // check if the front is bigger than the max
                max = getFront();
            dequeue(); // dequeue for the next front item
        }
        return max;
    }
};

int main()
{
    Queue *queueList = new Queue(); // queueList for the queue.

    queueList->enqueue(25); 
    queueList->enqueue(12); 
    queueList->enqueue(14); 
    queueList->enqueue(5);  //   tail             front
    queueList->enqueue(7);  //    |                 |
    queueList->enqueue(18); // [ 18  7  5  14  12  25 ]

    cout << "=============== Queue Implement =================\n" << endl; //some styling :)
    queueList->print(); // print queue
    cout << "\tFront value : " << queueList->getFront() << endl; // get front value from queue
    cout << "\tSize of Queue : " << queueList->size() << endl;  // get size of queue
    queueList->isEmpty() ? cout << "\tQueue is Empty" << endl : cout << "\tQueue is Not Empty" << endl; // check queue is empty
    cout << "\tMax Value of Queue : " << queueList->findMaxValue() << endl; // get max value from queue
    cout << "\n=================================================" << endl; //some styling :)
    cout << "Created-By-OlcayHanK"<<endl;
    cout << "https://github.com/olcayhan" <<endl;
    cout << "=================================================" << endl; //some styling :)

    return 0;
};