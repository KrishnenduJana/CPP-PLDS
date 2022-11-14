#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* next;
	// A constructor is called here
	node(int value)
	{
		// It automatically assigns the
		// value to the data
		data = value;

		// Next pointer is pointed to NULL
		next = NULL;
	}
};

// Function to insert an element
// at head position
void insertathead(node*& head, int val)
{
	node* n = new node(val);
	n->next = head;
	head = n;
}

// Function to insert an
// element at the end
void insertattail(node*& head, int val)
{
	node* n = new node(val);
	if (head == NULL) {
		head = n;
		return;
	}

	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = n;
}

// Function to insert a element
// at a specified position
void insertafter(node* head, int key, int val)
{
	node* n = new node(val);
	if (key == head->data) {
		n->next = head->next;
		head->next = n;
		return;
	}

	node* temp = head;
	while (temp->data != key) {
		temp = temp->next;
		if (temp == NULL) {
			return;
		}
	}
	n->next = temp->next;
	temp->next = n;
}


// Function to print the
// singly linked list
void print(node* head)
{
	node* temp = head;

	while (temp != NULL) {
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

void search(node *head,int key)
{
    node *temp = head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            cout<<"Element found"<<endl;
            return;
        }
        temp = temp->next;
    }
    if(temp==NULL)
    cout<<"Element Not Found"<<endl;
}

void deleteAthead(node *&head)
{
    node *todelete  = head;
    head = head->next;

    delete todelete;
}

void deleteAttail(node *&head)
{
    node *temp = head;
    while (temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;    
    delete todelete;
    temp->next = NULL;    
}

void deletion(node* &head, int val)
{
    if(head==NULL)  //No list is preasent
    {
        return;
    }
    if(head->next==NULL)        //Only one node present
    {
        deleteAthead(head);
    }

    node *temp = head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node *todelete = temp->next;
    temp->next=temp->next->next;

    delete todelete;
}

void deleteafter(node *&head, int pos)
{
    node * temp = head;
    if(temp==NULL)
    return;
    if(pos==1)            //Here I start indexing from 1
    deleteAthead(head);
    else
    {
        node *tempprev;
    
        for(int i=1;i<pos;i++)
        {
            tempprev = temp;
            temp=temp->next;
        }
        node *todelete = temp;
        tempprev->next = temp->next;
        delete todelete;
    }
}

void reverse(node * &head)
{
    node * pre = NULL;
    node * current = head;
    node * nxt = NULL;

    while(current !=NULL)
    {
        nxt = current->next;
        current->next = pre;
        pre = current;
        current = nxt;
    }
    head = pre;     //New head
}
// Main function
int main()
{

	// Declaring an empty linked list
	node* head = NULL;

	insertathead(head, 1);
	insertathead(head, 2);
	cout << "After insertion at head: ";
	print(head);
	cout << endl;

	insertattail(head, 4);
	insertattail(head, 5);
    insertattail(head, 10);
    insertattail(head, 99);
	cout << "After insertion at tail: ";
	print(head);
	cout << endl;

	insertafter(head, 1, 2);
	insertafter(head, 5, 6);
	cout << "After insertion at a given position: ";
	print(head);
	cout << endl;

    search(head,2);
    deletion(head,4);
    print(head);

    deleteAthead(head);
    print(head);

    deleteAttail(head);
    print(head);

    deleteafter(head,2);
    print(head);

    reverse(head);
    print(head);
	return 0;
}