#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int d){
        data=d;
        next=NULL;
    }

};
void insertathead(node* &head,int data){
    node* temp=new node(data);
    temp->next=head;
    head=temp;
    // temp=head;
}
void insertatrand(node* &head,int data,int pos){
    node* tem=new node(data);
    node* temp=head;
    for(int i=1;i<(pos-1);i++){
        temp=temp->next;
    }
    tem->next=temp->next;
    temp->next=tem;

}
void revlist(node* &head){
       


    // node* back=NULL;
    // node* curr=head;
    // node* forw=head->next;
    // while(forw != NULL){
    //     curr->next=back;
        
    //     back=curr;
    //     // cout<<back->data<<endl;
    //     curr=forw;
    //     forw=forw->next;
    // }
    // curr->next=back;

    // head=curr;
}
void print(node* head){
    node*temp=head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main(){
    node* head=new node(5);
    // cout<<head->data;
    insertathead(head,10);
    insertathead(head,15);
    insertatrand(head,7,3);
    print(head);
    cout<<head->data<<endl;
    revlist(head);
    // cout<<head->data<<endl;
    print(head);
    cout<<head->data;


}