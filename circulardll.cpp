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
void insert(node* &tail,int num,int value){
    node*temp=new node(num);
    node*tem=tail;
    while(tem->data != value){
        tem=tem->next;
    }
    temp->prev=tem;
    temp->next=tem->next;
    tem->next->prev=temp;
    tem->next=temp;

}
void print(node* &tail){
    node*tep=tail;
    int num=tep->data;
    while(num != tep->data){
        
    }
}

int main(){
    node*node1=new node(10);
    node*tail=node1;

}