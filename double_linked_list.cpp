#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    node *prev;
    int data;
    node *next;
    node(int val)
    {
        prev = NULL;
        data = val;
        next = NULL;
    }    
};
void insertAthead(node *&head,int val)
{
    node *n = new node(val);
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;       //If head = NULL then it automatically indicates that n
    }
    head = n; 
}

void insertAttail(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=n;
    n->prev = temp;
}

void insertAfter(node *&head,int key, int val)
{
    node *n = new node(val);
    node *temp = head;
    if(temp ==NULL)
    {
        insertAthead(head,val);        
    }
    while(temp->data!=key)
    {
        temp=temp->next;        
    }
    n->next = temp->next;
    n->prev = temp;
    if(temp->next!=NULL)        //check whether the last node is NULL or not
    temp->next->prev = n;     //Remember this linking
    temp->next = n;

}
void deleteHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    head->prev = NULL;
    delete todelete;
}

void deleteTail(node *&head)
{
    node * temp = head;
    if(head == NULL)
    {
        return;
    }
    while(temp!=NULL)
    {
        temp=temp->next;
    }

    node *todelete = temp;
    
}

void display(node *head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

int main()
{
    node *head = NULL;
    insertAthead(head,2);
    insertAthead(head,1);
    insertAthead(head,3);
    display(head);
    insertAttail(head,4);
    display(head);
    insertAfter(head,2,9);
    display(head);
    deleteHead(head);
    display(head);
}