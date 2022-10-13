
/*  Problem Statement : Given a singly linked list and a data item 'x'. We need to insert this item into the linked list such that after insertion the linked list 
                        remains sorted.
    Examples: 
    1. Input: 10 -> 20 -> 30 -> 40
       x = 25
       Output: 10 -> 20 -> 25 -> 30 -> 40
    2. Input: 10 -> 25
       x = 5
       Output: 5 -> 10 -> 25
    3. Input: 89 -> 90
       x = 100
       Output: 89 -> 90 -> 100
*/
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

node* insertFront(node* head,int n)
{
    node *temp=new node(n);
    temp->next=head;
    return temp;
}

void display(node* head)
{
    node *cur=head;
    while(cur!=NULL)
    {
        cout<<cur->data<<" -> ";
        cur=cur->next;
    }
    cout<<"NULL"<<endl;
}

node* insertEnd(node* head,int n)
{
    node *temp=new node(n);
    node* cur=head;
    while(cur->next!=NULL)
        cur=cur->next;
    cur->next=temp;
    return head;
}

/*
node* deleteBegin(node* head)
{
    node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
node* deleteEnd(node* head)
{
    node* temp=head;
    while(temp->next->next!=NULL)
        temp=temp->next;
    delete temp->next;
    temp->next=NULL;
    return head;
}
*/

node* sortedNode(node* head,int x)
{
    node* temp=new node(x);
    node* cur=head;
    while(cur->next->data < x)
        cur=cur->next;
    temp->next=cur->next;
    cur->next=temp;
    return head;
}

int main()
{
    node* head=NULL;
    head=insertFront(head,40);
    head=insertFront(head,30);
    head=insertFront(head,20);
    head=insertFront(head,10);
    display(head);
    cout<<endl;
    head=insertEnd(head,50);
    head=insertEnd(head,60);
    head=insertEnd(head,70);
    display(head);
    cout<<endl;
//  head=deleteBegin(head);
//  display(head);
//  cout<<endl;
//  head=deleteEnd(head);
//  display(head);
    head=sortedNode(head,58);
    display(head);
    cout<<endl;
    return 0;
}
