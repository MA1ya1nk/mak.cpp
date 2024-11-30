#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){
        this->data = data;
        this->next=NULL;
    }

};
void insert(node* &tail,int val){
    
      node* temp=new node(val);
      node*tem=tail;
      while(tem->next != tail){
        tem=tem->next;
      }
      tem->next=temp;
      temp->next=tail;
}
void print(node* &tail){
    node* tep=tail;
    do{
        cout<<tep->data<<" ";
        tep=tep->next;
    }while(tep != tail);
}
int main(){
    node*node1=new node(10);
    node*tail=node1;
    tail->next=tail;
    insert(tail,15);
    print(tail);
    cout<<endl;
    insert(tail,155);
    print(tail);
    cout<<endl;

}