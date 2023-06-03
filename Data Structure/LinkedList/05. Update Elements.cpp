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

/// header - newNode - n1 - n2 - ...
void updateFront(Node* header, int data)
{
    header->Next->data = data;
}

/// header - n1 - n2 - newNode
void updateLast(Node* header, int data)
{
    while(header->Next != NULL)
    {
        header = header->Next;
    }
    header->data = data;
}

/// header - n0 - n1 - n2 - newNode - n3 - n4 - n5 (index = 3)
void updateAt(Node* header, int data, int index)
{
    int indexCheck = 0;
    header = header->Next;

    for(int i = 0; i < index and header->Next != NULL; i++)
    {
        header = header->Next;
    }
    if(header->Next ==NULL)
        cout << "Out of bound";
    else
        header->data = data;
}

/// header - n0 - n1 - n2 - newNode - n3 - n4 - n5 (Desired value at n3)
void updateValue(Node* header, int data, int value)
{
    while(header->Next != NULL and header->data != value)
    {
        header = header->Next;
    }
    header->data = data;
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
    insertFront(header, 5);
    insertFront(header, 15);
    insertFront(header, 2);
    printLinkedList(header);

    cout << "Update Front: ";
    updateFront(header, 3);
    printLinkedList(header);

    cout << "Update Last: ";
    updateLast(header, 11);
    printLinkedList(header);

    cout << "Update At 2nd: ";
    updateAt(header, 7, 2);
    printLinkedList(header);

    cout << "Update At 2nd: ";
    updateValue(header, 17, 5);
    printLinkedList(header);

	return 0;
}
