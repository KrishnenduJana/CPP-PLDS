#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Create A class node

class node
{
    public:
    int data;
    node* next;

    node(int val)   // Node Class Constructor
    {
        data=val;
        next=NULL;
    }
};

// Insert Element At Tail

void insertAtTail(node* &head,int val)  //* & pointer by refference
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(head->next!=NULL)
    {
        head=head->next;
    }
    head->next=n;
}

// Display All Element

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

// Insert At Head

void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}

// Seraching  At Linked List

string Search(node* head,int key)
{
    node* temp=head;
    while(temp->next!=NULL)
    {
        if(temp->data==key)
        {
          return "Found";
        }
        temp=temp->next;  
    }
    return "Not Found";
}

int main()
{
    
    node* head =NULL;
    insertAtTail(head,12);
    insertAtTail(head,178);
    insertAtTail(head,1788);
    display(head);
    insertAtHead(head,345);
    display(head);
    cout<<Search(head,178)<<endl;
    cout<<Search(head,349)<<endl;

    return 0;
}