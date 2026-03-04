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
  if(head==NULL){
    return;
  }
  cout<<head->data<<" ";
  for(node *p=head->next;p!=head;p=p->next){
    cout<<p->data<<" ";
  }
}
node *insertbegin(node *head,int x){
    node *curr=new node(x);
    if(head==NULL){
        curr->next=curr;
        return curr;
    }
    else{
        curr->next=head->next;
        head->next=curr;
        int x=head->data;
        head->data=curr->data;
        curr->data=x;
        return head;
    }
}
node *insertend(node *head,int x){
    node *curr=new node(x);
    if(head==NULL){
        curr->next = curr;
        return curr;
    }
    else{
    curr->next=head->next;
    head->next=curr;
    int t=head->data;
    head->data=curr->data;
    curr->data=t;
    return curr;
}}
node *deletefirst(node *head){
    if(head==NULL){
        return NULL;
    }
    else if(head->next==NULL){
        delete head;
        return NULL;
    }
    else{
        head->data=head->next->data;
        node *temp=head->next;
        head->next=head->next->next;
        delete temp;
        return head;
    }
}
// node *deletelast(node *head){
//         node *curr=head;
//         if(head==NULL || head->next==NULL){
//             return NULL;
//         }
//         else{
//             while(curr->next->next!=NULL){
//                 curr=curr->next;
//             }
//             node *temp=curr->next;
//             delete temp;
//             curr->next=NULL;
//             return head;
//         }
// }
int main(){
   node *head=new node(20);
   head->next= new node(30);
   head->next->next= new node(40);
   head->next->next->next=head;
   head=insertbegin(head,10);
   head=insertend(head,50);
   head=deletefirst(head);
//   head=deletelast(head);
   printlist(head);
}