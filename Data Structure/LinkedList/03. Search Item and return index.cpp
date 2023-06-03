#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *Next;
};

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

int searchItemAndReturnIndex(Node* header, int value)
{
    int index = -1;
    while(header != NULL and header->data != value)
    {
        index++;
        header = header->Next;
    }
    if(header == NULL)
        index = -1;
    return index;
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

    insertLast(header, 10);
    insertLast(header, 5);
    insertLast(header, 5);
    insertLast(header, 25);
    insertLast(header, 15);
    printLinkedList(header);

    int x = searchItemAndReturnIndex(header, 20);
    if(x == -1)
        cout << "Item not present in the linked list";
    else
        cout << x << endl;

	return 0;
}
