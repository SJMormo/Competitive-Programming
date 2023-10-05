#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node* newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

Node* insertNode(Node *root, int data)
{
    if(root == NULL)
        return newNode(data);
    else if(root->data > data)
        root->left = insertNode(root->left, data);
    else
        root->right = insertNode(root->right, data);
}

void printInOrder(Node *node)
{
    if(node == NULL)
        return;

    printInOrder(node->left);
    cout << node->data << ' ';
    printInOrder(node->right);
}

int main()
{
    Node *root = NULL;
    root = insertNode(root, 50);
    insertNode(root, 100);
    insertNode(root, 90);
    insertNode(root, 2);
    insertNode(root, 10);

    printInOrder(root);


    return 0;
}
