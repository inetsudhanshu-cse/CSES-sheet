#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void printlist(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
node *insertbegin(node *head,int x){
    node *curr=new node(x);
    curr->next=head;
    return curr;
}
node *insertend(node *head,int x){
    node *curr=new node(x);
    curr->next=NULL;
    node *temp=head;
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp->next=curr;
    return head;
}
node *deletefirst(node *head){
    while(head==NULL){
        return NULL;
    }
    node *temp=head->next;
    delete head;
    return temp;
}
node *deletelast(node *head){
        node *curr=head;
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        else{
            while(curr->next->next!=NULL){
                curr=curr->next;
            }
            node *temp=curr->next;
            delete temp;
            curr->next=NULL;
            return head;
        }
}
int main(){
   node *head=new node(20);
   head->next= new node(30);
   head->next->next= new node(40);
   head=insertbegin(head,10);
  head=insertend(head,50);
  head=deletefirst(head);
  head=deletelast(head);
   printlist(head);
}