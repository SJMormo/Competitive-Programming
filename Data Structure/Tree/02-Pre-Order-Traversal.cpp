#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node* newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void printPreOrder(Node *node)
{
    if(node == NULL)
        return;

    cout << node->data << ' ';
    printPreOrder(node->left);
    printPreOrder(node->right);
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->left->left = newNode(8);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    printPreOrder(root);

    return 0;
}
