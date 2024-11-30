#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
void insertathead(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}
void insertatend(node* &head,int d){
    node* temp=new node(d);
    node* curr=head;
    while(curr->next != NULL){
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;

}
void insertatrand(node* &head,int pos,int d){
    node* temp=new node(d);
    node* curr=head;
    for(int i=2;i<pos;i++){
        curr=curr->next;
    }
    curr->next->prev=temp;
    temp->prev=curr;
    temp->next=curr->next;
    curr->next=temp;
}
void reverse(node* &head){
    
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
    // cout<<head->data;
    insertathead(head,8);
     insertathead(head,6);
      insertathead(head,4);
       insertathead(head,2);
    insertatend(head,12);
    insertatend(head,14);
    insertatend(head,16);
    insertatend(head,18);
    insertatrand(head,3,5);
    insertatrand(head,5,7);
    insertatrand(head,2,3);
    


       print(head);

}