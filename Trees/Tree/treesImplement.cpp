#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node *left;

    Node(int value)
    {
        data = value;
        right = NULL;
        left = NULL;
    }
};

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20); 
    root->right = new Node(15);
    root->left->right = new Node(25);
    root->left->left = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(35);

    cout << root->left->left->left;

    return 0;
};