//Bayazid Hossain parvez
//ID 202420000324
//CSE242.1

#include <iostream>
using namespace std;

/* doubly linked list er node */
struct node{
int data;
node *prev;
node *next;
};

/* global head and tail */
node *head=NULL;
node *tail = NULL;

/* function declaration */
void insert(int pos);
void search(int key);
void removeNode(int key);
void middle();
void display();

int main(){
    int ch,pos,key;

while(1){
cout<<"\n---- Doubly Linked List Menu ----\n";
cout<<"1. Insert\n";
cout<<"2. Search\n";
cout<<"3. Remove\n";
cout<<"4. Middle\n";
cout<<"5. Display\n";
cout<<"6. Exit\n";
cout<<"Enter choice: ";
cin>>ch;

switch(ch){
case 1:
    cout<<"Enter position: ";
cin>>pos;
insert(pos);
break;

case 2:
cout<<"Enter value to search: ";
cin>>key;
search(key);
break;

case 3:
    cout<<"Enter value to remove: ";
cin>>key;
removeNode(key);
break;

case 4:
middle();
break;

case 5:
 display();
break;

case 6:
cout<<"Program sesh\n";
return 0;

default:
cout<<"Wrong choice bro!\n";
}
}
}

/* insert function */
void insert(int pos){
node *newNode=new node();
cout<<"Enter data: ";
cin>>newNode->data;

newNode->prev=NULL;
newNode->next =NULL;

// jodi list empty thake
if(head==NULL){
head=tail=newNode;
return;
}

// first position e insert
if(pos==1){
newNode->next=head;
head->prev=newNode;
head=newNode;
return;
}

node *temp=head;
for(int i=1;i<pos-1 && temp->next!=NULL;i++){
temp=temp->next; // ek dhap kore agay
}

newNode->next=temp->next;
newNode->prev =temp;

if(temp->next!=NULL)
temp->next->prev=newNode;
else
tail=newNode; // last e insert hoise

temp->next=newNode;
}

/* search function */
void search(int key){
node *temp=head;

while(temp!=NULL){
if(temp->data==key){
cout<<"Found\n";
return;
}
temp=temp->next;
}
cout<<"Not Found\n";
}

/* remove function */
void removeNode(int key){
node *temp =head;

while(temp!=NULL){
if(temp->data==key){

if(temp==head)
head=temp->next;

if(temp==tail)
tail=temp->prev;

if(temp->prev!=NULL)
temp->prev->next=temp->next;

if(temp->next!=NULL)
temp->next->prev=temp->prev;

delete temp;
cout<<"Node deleted\n";
return;
}
temp=temp->next;
}
cout<<"Value nai list e\n";
}

/* middle element ber korar function */
void middle(){
if(head==NULL){
cout<<"List empty\n";
return;
}

node *slow=head;
node *fast =head;

// fast 2 step, slow 1 step
while(fast!=NULL && fast->next!=NULL){
slow=slow->next;
fast=fast->next->next;
}

cout<<"Middle element: "<<slow->data<<endl;
}

/* display function */
void display(){
node *temp=head;

if(head==NULL){
cout<<"List e kichu nai\n";
return;
}

cout<<"List: ";
while(temp!=NULL){
cout<<temp->data<<" <-> ";
temp=temp->next;
}
cout<<"NULL\n";
}
