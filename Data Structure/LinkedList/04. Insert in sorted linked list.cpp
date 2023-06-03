#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* Next;
};

void insertFirst(Node* header, int data)
{
    Node* newNode = (Node *)malloc(sizeof(Node));
    if(newNode == NULL)
    {
        cout << "Space not available\n";
    }
    else
    {
        newNode->data = data;
        newNode->Next = header->Next;
        header->Next = newNode;
    }
}

void insertInSortedLinkedList(Node* header, int data)
{
    Node* prev = header;
    Node* curr = header->Next;

    while(curr != NULL and curr->data < data)
    {
        prev = curr;
        curr = curr->Next;
    }

    // inserting
    Node* newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->Next = curr;
    prev->Next = newNode;

}

void printLinkedList(Node* header)
{
    header = header->Next;
    while(header != NULL)
    {
        cout << header->data << ' ';
        header = header->Next;
    }
    cout << endl;
}

int main()
{
    Node* header = (Node *)malloc(sizeof(Node));
    header->data = INT_MAX;
    header->Next = NULL;

    insertFirst(header, 10);
    insertFirst(header, 8);
    for(int i = 5; i >= 0; i--)
        insertFirst(header, i);
    printLinkedList(header);

    // insert in sorted array
    insertInSortedLinkedList(header, 13);
    printLinkedList(header);

    return 0;
}
