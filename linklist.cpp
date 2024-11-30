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
void insertatlast(node* head,int n){
    node*temp=new node(n);
    node*tem1=head;
    while(tem1->next != NULL){
        tem1=tem1->next;
    }
     tem1->next=temp;
     
    
}
void insertatrand(node* head,int n,int pos){
    node*temp=new node(n);
    node*tem=head;
    for(int i=1;i<pos-1;i++){
        tem=tem->next;
    }
    temp->next=tem->next;
    tem->next=temp;

}
void dltatrand(node* head,int n){
       node*temp=head;
       node*tem=temp->next;
       for(int i=1;i<n-1;i++){
         temp=temp->next;
         tem=tem->next;
       }
       temp->next=tem->next;
       delete tem;
}
void printll(node* head){
    node*temp=head;
    while (temp != NULL)
    {
         cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    
}
int main(){
    node*node1=new node(19);
    
    printll(node1);
    cout<<endl;
    insertatlast(node1,29);
    printll(node1);
    cout<<endl;
     insertatlast(node1,39);
      printll(node1);
      cout<<endl;
      insertatrand(node1,49,4);
      printll(node1);
      cout<<endl;
      insertatrand(node1,59,4);
      printll(node1);
      cout<<endl;
      dltatrand(node1,2);
      printll(node1);
      cout<<endl;


}