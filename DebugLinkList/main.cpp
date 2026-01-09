#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
}*head, *tail;


void insertion()
{
    if (tail==NULL)
    {
        head=new node();
        cout<<"INPUT DATA :";

        cin>>head->data;
        head->next=NULL;
        tail=head;
    }
    else
    {
        node *temp = new node();
        cout<<"INPUT DATA :";
        cin>> temp->data;
        tail->next= temp;
        temp->next = NULL;
        tail=temp;
    }
}



void display()
{

    if (head==NULL)
        cout<<"Linked List is Empty";
    node *temp2;
    temp2=head;

    while (temp2!=NULL)
    {
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
    cout<<endl<<endl;
}



int main()
{
    head = NULL;
    tail = NULL;

    cout<<"YOUR CHOICE :";
    cout<<endl<<"1.INSERT AT TAIL "<<endl<<"2.DISPLAY THE LINKED LIST "<<endl<<"I CHOOSED :";
    int i;
    cin>>i;
    while (i<=3)
        if (i == 1)
        {
            insertion();

        }
        else if (i == 2)
        {
            display();
        }




}










