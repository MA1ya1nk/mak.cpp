#include<iostream>
using namespace std;
class node{
   public:
   int data;
   node* prev;
   node* next;
   node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
     }
};


void insertAtHead(node* &head,int val){
     node* temp=new node(val);
     temp->next=head;
     head->prev=temp;
     head=temp;
}
void insertAtRand(node* &head,int pos,int val){
   node* temp=new node(val);
   node* tem=head;
   for(int i=1;i<(pos-1);i++){
      tem=tem->next;
   }

   if(tem->next==NULL){
      temp->prev=tem;
      tem->next=temp;
   }
   else{
   temp->prev=tem;
   temp->next=tem->next;
   tem->next->prev=temp;
   tem->next=temp;
   }
}
void printLL(node* &head){
   node*temp=head;
   while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
   }
}

void reverse(node* &head,node* &curr,node* &back){
   if(curr->next==NULL){
      head=curr;
      curr->next=back;
      return ;
   }
   reverse(head,curr->next,curr);
   curr->next=back;

   return ;
}
int main(){
   node*head=new node(10);
   insertAtHead(head,5);
    insertAtHead(head,2);
    printLL(head);
    cout<<endl;
insertAtHead(head,-1);
    printLL(head);
    cout<<endl;
    insertAtRand(head,3,4);
    printLL(head);
    cout<<endl;
    insertAtRand(head,5,8);
    printLL(head);
    cout<<endl;
    insertAtRand(head,7,15);
    printLL(head);
    cout<<endl;
    node* curr=head;
    node* forw=head->next;
    node* back=NULL;
    reverse(head,curr,back);

   //  while(forw != NULL){
   //    curr->next=back;
   //    back=curr;
   //    curr=forw;
   //    forw=forw->next;

   //  }
   //  curr->next=back;
   //  head=curr;
    printLL(head);




   
}