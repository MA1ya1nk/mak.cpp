#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*prev;

    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;

    }
};
void insertathead(node* &head,int n){
      node*temp=new node(n);
      
      temp->next=head;
      head->prev=temp;
      head=temp;

}
void insertatrand(node* &head,int num,int pos){
    node*temp=new node(num);
    node*tem=head;
    for(int i=1;i<pos-1;i++){
       tem=tem->next;
    }
    temp->prev=tem;
    temp->next=tem->next;
    tem->next->prev=temp;
    tem->next=temp;
}
void print(node* &head){
    node*temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node*node1=new node(9);
    node*head=node1;
    print(head);
    cout<<endl;
    insertathead(head,11);
    print(head);
    cout<<endl;
    insertathead(head,13);
    print(head);
    cout<<endl;
    insertatrand(head,55,3);
    print(head);
    cout<<endl;
    insertatrand(head,59,2);
    print(head);
    cout<<endl;


}