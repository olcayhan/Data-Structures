#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
};

class LinkedList
{
  Node *head;
  Node *tail;

public:
  LinkedList()
  {
    head = NULL;
    tail = NULL;
  }

  void insertAtHead(int data)
  {
    Node *newNode = new Node();
    Node *temp = head;

    newNode->data = data;
    newNode->next = head;
    newNode->prev = NULL;

    if (head != NULL)
    {
      temp->prev = newNode;
    }
    else
    {
      tail = newNode;
    }

    head = newNode;

    cout << data << " is added to front of list" << endl;
  };

  void insertAtTail(int data)
  {

    Node *newNode = new Node();
    Node *temp = tail;

    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = temp;

    temp->next = newNode;

    tail = newNode;

    cout << data << " is added to tail of list" << endl;
  };

  void insertAtSpec(int position, int data)

  {
    Node *newNode = new Node();
    Node *beforeNode = head;

    // access the before node wanted to be inserted
    for (int i = 1; i < position; i++)
    {
      beforeNode = beforeNode->next;
    }

    // access the after node wanted to be inserted
    Node *afterNode = beforeNode->next;

    if (afterNode == NULL)
    {
      insertAtTail(data);
    }
    else if (afterNode == beforeNode)
    {
      insertAtHead(data);
    }
    else
    {
      newNode->data = data;
      newNode->prev = beforeNode;
      newNode->next = afterNode;

      beforeNode->next = newNode;
      afterNode->prev = newNode;

      cout << data << " is added " << position + 1 << ".position of list" << endl;
    }
  }

  void removeAtHead()
  {
    Node *temp = head;

    head = head->next;

    head->prev = NULL;
    temp->next = NULL;

    cout << temp->data << " is removed from front of list" << endl;
    delete temp;
  }

  void removeAtTail()
  {
    Node *temp = tail;

    tail = tail->prev;

    temp->prev = NULL;
    tail->next = NULL;

    cout << temp->data << " is removed from tail of list" << endl;
    delete temp;
  }

  void getFrontItem()
  {
    cout << "Front item in list : " << head->data << endl;
  }

  void getTailItem()
  {
    cout << "Tail item in list : " << tail->data << endl;
  }

  void removeAllItems()
  {
    Node *  = tail;

    while (temp != NULL)
    {
      delete temp;
      temp = temp->prev;
    }

    head = NULL;
    tail = NULL;

    cout << "list is cleared" << endl;
  }
};

int main()
{
  LinkedList *list = new LinkedList();

  list->insertAtHead(1);
  list->insertAtTail(2);
  list->insertAtSpec(1, 5); // second position is equal to 1.index
  list->getFrontItem();
  list->getTailItem();
  list->removeAtHead();
  list->removeAtTail();
  list->removeAllItems();

  return 0;
};