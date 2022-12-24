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

class BinarySearchTree
{
public:
    Node *root = NULL;
    int height = 0;

    BinarySearchTree(int data)
    {
        Node *node = new Node(data);
        root = node;
    };

    void push(int data)
    {
        Node *temp = new Node(data);
        Node *temp2 = root;
        int tempHeight = 1;

        while (true)
        {
            if (data > temp2->data)
            {
                if (temp2->right != NULL)
                    temp2 = temp2->right;
                else
                {
                    temp2->right = temp;
                    break;
                }
            }

            else
            {
                if (temp2->left != NULL)
                    temp2 = temp2->left;
                else
                {
                    temp2->left = temp;
                    break;
                }
            }

            tempHeight += 1;
        }

        if (height < tempHeight)
            height = tempHeight;
    }

    void deleteNode(int data)
    {
        Node *temp = root;

        while (true)
        {
            if (data > temp->data)
            {
                if (temp->right->data != data)
                    temp = temp->right;
                else
                {
                    if (temp->right->right != NULL && temp->right->left != NULL)
                    {
                        temp->right->data = temp->right->right->data;
                        temp->right->right = NULL;
                    }
                    else if (temp->right->right != NULL)
                    {
                        temp->right->data = temp->right->right->data;
                        temp->right->right = NULL;
                    }
                    else if (temp->right->left != NULL)
                    {
                        temp->right->data = temp->right->left->data;
                        temp->right->right = NULL;
                    }
                    else
                    {
                        temp->right = NULL;
                    }

                    break;
                }
            }

            else
            {
                if (temp->left->data != data)
                    temp = temp->left;
                else
                {
                    if (temp->left->right != NULL && temp->left->left != NULL)
                    {
                        temp->left->data = temp->left->right->data;
                        temp->left->right = NULL;
                    }
                    else if (temp->left->right != NULL)
                    {
                        temp->left->data = temp->left->right->data;
                        temp->left->right = NULL;
                    }
                    else if (temp->left->left != NULL)
                    {
                        temp->left->data = temp->left->left->data;
                        temp->left->left = NULL;
                    }
                    else
                    {
                        temp->left = NULL;
                    }

                    break;
                }
            }
        }
    }

    void print()
    {
        Node *temp = root;

        cout << temp->data;
    }
};

int main()
{
    BinarySearchTree *bst = new BinarySearchTree(10);
    bst->push(5);
    bst->push(15);
    bst->push(20);
    bst->push(12);
    bst->push(9);
    bst->push(2);

    bst->print();

    return 0;
};