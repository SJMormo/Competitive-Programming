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
void deleteFront(Node* header)
{
    if(header->Next == NULL)
        return;
    Node* ptr = header->Next;
    header->Next = ptr->Next;
    free(ptr);
}

/// header - n1 - n2 - newNode
void deleteLast(Node* header)
{
    if(header->Next == NULL)
        return;
    while(header->Next->Next != NULL)
    {
        header = header->Next;
    }
    free(header->Next->Next);
    header->Next = NULL;
}

/// header - n0 - n1 - n2 - newNode - n3 - n4 - n5 (index = 3)
void deleteAt(Node* header, int index)
{
    if(header->Next == NULL)
        return;
    Node* prev = header;
    header = header->Next;
    for(int i = 0; header->Next != NULL and i < index; i++)
    {
        prev = header;
        header = header->Next;
    }
    prev->Next = header->Next;
    free(header);
}

/// header - n0 - n1 - n2 - newNode - n3 - n4 - n5 (Desired value at n3)
void deleteValue(Node* header, int value)
{
    if(header->Next == NULL)
        return;
    Node* prev = header;
    while(header->Next != NULL and header->data != value)
    {
        prev = header;
        header = header->Next;
    }
    prev->Next = header->Next;
    free(header);
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

    cout << "Delete Front: ";
    deleteFront(header);
    printLinkedList(header);

    cout << "Delete Last: ";
    deleteLast(header);
    printLinkedList(header);

    cout << "Delete At 1st: ";
    deleteAt(header, 1);
    printLinkedList(header);

    cout << "Delete Value 5: ";
    deleteValue(header, 5);
    printLinkedList(header);

	return 0;
}
