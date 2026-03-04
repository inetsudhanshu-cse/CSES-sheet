#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node *prev;
    node(int x){
        data=x;
        prev=next=NULL;
    }
};
void printlist(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
node *insertbegin(node *head,int x){
        node *temp=new node(x);
        if(head!=NULL)
        head->prev=temp;
        temp->next=head;
        return temp;
}
node *insertend(node *head,int x){
    node *temp=new node(x);
   if(head==NULL){
    return temp;
   }
   node *curr=head;;
   while(curr->next!=NULL){
            curr=curr->next;
   }
   curr->next=temp;
   temp->prev=curr;
   return head;
}
node *deletelast(node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node *curr=head;
    while (curr->next != NULL) { 
        curr = curr->next;
    }
    curr->prev->next = NULL;
    delete curr; 
    return head;
}
int main(){
    node *head=new node(20);
    node *temp1=new node(30);
    node *temp2=new node(40);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    head=insertbegin(head,10);
    head=insertend(head,50);
//   head=deletefirst(head);
  head=deletelast(head);
   printlist(head);
}