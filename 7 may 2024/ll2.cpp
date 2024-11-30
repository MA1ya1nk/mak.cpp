#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insertAtRand(node* &head,int d,int pos){
    node* add=new node(d);
    node* temp=head;
    for(int i=1;i<(pos-1);i++){
        temp=temp->next;

    }
    add->next=temp->next;
    add->prev=temp;
    temp->next->prev=add;
    temp->next=add;
}
void insertAtEnd(node* &head,int d){
    node* add=new node(d);
    node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=add;
    add->prev=temp;
}
void print(node* &head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->prev<<" ";
        cout<<temp->data<<" ";
        cout<<temp->next<<" ";
        cout<<endl;
        temp=temp->next;
    }
}
int main(){
    node* head=new node(10);
    insertAtEnd(head,15);
    insertAtEnd(head,20);
    insertAtEnd(head,25);
    print(head);
    insertAtRand(head,12,2);
    insertAtRand(head,21,4);
    print(head);


}