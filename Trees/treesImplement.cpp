#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node *left;
};

class treesImplement
{
    Node *root = NULL;

public:
    treesImplement(int data)
    {

        Node *newNode = new Node();
        root = newNode;
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->data = data;
    }

    void push_right(int data)
    {
        Node *newNode = new Node();
        Node *temp = root;

        while (temp->right != NULL)
        {
            temp = temp->right;
        }
        temp->right = newNode;
        newNode->data = data;
        newNode->right = NULL;
        newNode->left = NULL;
    }
    void push_left(int data)
    {
        Node *newNode = new Node();
        Node *temp = root;

        while (temp->left != NULL)
        {
            temp = temp->left;
        }
        temp->left = newNode;
        newNode->data = data;
        newNode->right = NULL;
        newNode->left = NULL;
    }

    int size()
    {
        Node *temp = root;
        int counterLeft = 0;
        int counterRight = 0;

        while (temp->left != NULL)
        {
            counterLeft++;
            temp = temp->left;
        }

        while (temp->right != NULL)
        {
            counterRight++;
            temp = temp->right;
        }

        return (counterLeft > counterRight ? counterLeft : counterRight);
    }

    void print()
    {
        Node *temp = root;
        Node *temp2 = root->left;

        cout << temp->data << endl;
        temp = temp->right;
        
        while (temp2 != NULL || temp != NULL)
        {
            if (temp != NULL)
            {
                cout << temp->data;
                temp = temp->right;
            }
            else
            {
                cout << "X";
            }

            cout << " ";
            if (temp2 != NULL)
            {
                cout << temp2->data;
                temp2 = temp2->left;
            }
            else
            {
                cout << "X";
            }

            cout << "" << endl;
        }
    }
};

int main()
{
    treesImplement *tree = new treesImplement(10);
    tree->push_right(20);
    tree->push_left(30);
    tree->push_left(50);

    tree->print();

    // cout << tree->size();

    return 0;
};