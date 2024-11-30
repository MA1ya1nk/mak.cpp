#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertatend(node* &head,int data){
    node*temp=new node(data);
    node*tem=head;
    while(tem->next != NULL){
        tem=tem->next;
    }
    tem->next=temp;
}
void print(node* &head){
    node*temp=head;
    
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
// int size(node* &head){
//     node*temp=head;
//     int n=0;
//     while(temp != NULL){
//         n++;  
//         temp=temp->next;
//     }
//     return n;
// }
// int median(node* &head,int m){
//    node*temp=head;
//    for(int i=1;i<m;i++){
//     temp=temp->next;
//    }
//    return temp->data;
// }
void reverse(node* &head,node*curr,node* prev){
     if(curr == NULL){
         head=prev;
        return ;
     }
     
     reverse(head,curr->next,curr);
     curr->next=prev;
}
int main(){
     node*node1=new node(9);
      node* head=node1;
       insertatend(head,19);
      insertatend(head,29);
       insertatend(head,39);
      insertatend(head,49);
    //   insertatend(head,87);
      print(head);
      node*prev=NULL;
      node*forward=head->next;
      node*curr=head;
      reverse(head,curr,prev);
      print(head);


      
}