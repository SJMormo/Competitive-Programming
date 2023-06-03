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

/// header - n1 - n2 - newNode
void insertLast(Node* header, int data)
{
    Node* newNode = (Node *)malloc(sizeof(Node));
    if(newNode == NULL)
    {
        cout << "Memory not available\n";
    }
    else
    {
        Node* ptr = header;
        while(ptr->Next != NULL)
        {
            ptr = ptr->Next;
        }
        newNode->data = data;
        newNode->Next = ptr->Next;
        ptr->Next = newNode;
    }
}

/// header - n0 - n1 - n2 - newNode - n3 - n4 - n5 (index = 3)
void insertAt(Node* header, int data, int index)
{
    Node* newNode = (Node *)malloc(sizeof(Node));
    if(newNode == NULL)
    {
        cout << "Memory not available\n";
    }
    else
    {
        Node* ptr = header;
        int indexCheck = 0;
        while(indexCheck < index and ptr->Next != NULL)
        {
            indexCheck++;
            ptr = ptr->Next;
        }
        if(indexCheck == index)
        {
            newNode->data = data;
            newNode->Next = ptr->Next;
            ptr->Next = newNode;
        }
        else
        {
            cout << "Out of Bound\n";
        }
    }
}

/// header - n0 - n1 - n2 - newNode - n3 - n4 - n5 (Desired value at n3)
void insertBeforeValue(Node* header, int data, int value)
{
    Node* newNode = (Node *)malloc(sizeof(Node));
    if(newNode == NULL)
    {
        cout << "Memory not available\n";
    }
    else
    {
        Node* ptr = header;
        Node* nextPtr = ptr->Next;
        while(nextPtr->data != value and nextPtr->Next != NULL)
        {
            ptr = nextPtr;
            nextPtr = nextPtr->Next;
        }
        newNode->data = data;
        newNode->Next = nextPtr;
        ptr->Next = newNode;
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
    printLinkedList(header);

    insertAt(header, 5, 2);
    printLinkedList(header);

    insertAt(header, 5, 1);
    printLinkedList(header);

    insertLast(header, 15);
    printLinkedList(header);

    insertBeforeValue(header, 2, 15);
    printLinkedList(header);

	return 0;
}
