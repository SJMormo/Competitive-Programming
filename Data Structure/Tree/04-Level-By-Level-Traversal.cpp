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
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void printLevelOrder(Node *node)
{
    if(node == NULL)
        return;

    queue<Node*> Q;
    Q.push(node);

    while(!Q.empty())
    {
        Node *temp = Q.front();
        cout << temp->data << ' ';
        Q.pop();

        if(temp->left != NULL)
            Q.push(temp->left);
        if(temp->right != NULL)
            Q.push(temp->right);
    }
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

    printLevelOrder(root);

    return 0;
}
