#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *Next;
};

/// header - newNode - n1 - n2 - ...
void insertFront(Node* header, int data)
{
    Node* newNode = (Node *)malloc(sizeof(Node));
    if(newNode == NULL)
    {
        cout << "Memory not available\n";
    }
    else
    {
        newNode->data = data;
        newNode->Next = header->Next;
        header->Next = newNode;
    }
}

/// reverse
void reverseLinkedList(Node* header)
{
    Node* a = header;
    if(a->Next == NULL)
        return;

    Node* b = a->Next;
    if(b->Next == NULL)
        return;
    else
    {
        a = NULL;
        Node* c = b->Next;
        while(b != NULL)
        {
            c = b->Next;
            b->Next = a;
            a = b;
            b = c;
        }
        header->Next = a;
    }

}

/// print linked list
void printLinkedList(Node* header)
{
    header = header->Next;
    while(header != NULL)
    {
        cout << header->data << ' ';
        header = header->Next;
    }
    cout << '\n';
}

int main()
{
    Node* header = (Node *)malloc(sizeof(Node));

    if(header == NULL)
    {
        cout << "Memory not available\n";
        return 0;
    }

    header->data = INT_MAX;
    header->Next = NULL;

    insertFront(header, 10);
    insertFront(header, 5);
    insertFront(header, 6);
    insertFront(header, 15);
    insertFront(header, 2);
    printLinkedList(header);

    reverseLinkedList(header);
    printLinkedList(header);

	return 0;
}
