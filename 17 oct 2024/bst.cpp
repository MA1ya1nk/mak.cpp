#include<iostream>
using namespace std;
class node{
   public:
   int data;
   node* left;
   node* right;

   node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
   }
};
node* buildbst(node* root){
    int data;
    cout<<"enter the data"<<endl;
    cin>>data;
    root=new node(data);
    
}
int main(){
    node* root=NULL;
    root=buildbst(root);


}