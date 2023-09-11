#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *Next; // Address of next node
};

int main()
{
    /* First way! */
	Node *head = NULL; // Node type pointer declare
	Node *second = NULL;
	Node *third = NULL;

	head = new Node(); // Node type memory location declare
	second = new Node();
	third = new Node();

	head->data = 1; // (*head).data is equivalent to head->data
	head->Next = second;

	second->data = 2;
	second->Next = third;

	third->data = 3;
	third->Next = NULL;

	cout << head->data << ' ' << head->Next << endl;
	cout << &second->data << endl << endl;

	cout << second->data << ' ' << second->Next << endl;
	cout << &third->data << endl << endl;


    /* Second way (A bogus way!?) */
    /*
    Node head, second, third;
    Node *head_ptr = &head, *second_ptr = &second, *third_ptr = &third;

    head.data = 1;
    head.Next = second_ptr;

    second.data = 2;
    second.Next = third_ptr;

    third.data = 3;
    third.Next = NULL;
    cout << second.data << ' ' << second_ptr->Next << endl;
    cout << third_ptr << endl;
    */


	return 0;
}
