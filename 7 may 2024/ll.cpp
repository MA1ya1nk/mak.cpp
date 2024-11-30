#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void insertAtRand(node* &head,int d,int pos){
    node* add=new node(d);
    node* temp=head;
    for(int i=1;i<(pos-1);i++){
         temp=temp->next;
    }
    add->next=temp->next;
    temp->next=add;
}
void insertAtEnd(node* &head,int d){
    node* add=new node(d);
    node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=add;
}
// void reverse(node* &head){
//     node* curr=head;
//     node* forw=NULL;
//     node* back=NULL;
//     while(curr != NULL){
//         forw=curr->next;
//         curr->next=back;
//         back=curr;
//         curr=forw;

//     }
//     head=back;
// }
void reverse(node* &head,node* &forw,node* &curr,node* &back){
   if(forw == NULL){
       curr->next=back;
       head=curr;
       return ;
   }
   curr->next=back;
   back=curr;
   curr=forw;
   forw=forw->next;
   
   reverse(head,forw,curr,back);
}
void print(node* &head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
   node* head=new node(10);
   insertAtEnd(head,12);
   insertAtEnd(head,14);
   insertAtEnd(head,16);
   insertAtEnd(head,18);
   print(head);
   cout<<endl;
//    insertAtRand(head,16,2);
//    insertAtRand(head,17,3);
node* back=NULL;
node* forw=head->next;
node* curr=head;

   reverse(head,forw,curr,back);
   print(head);
   

   
}