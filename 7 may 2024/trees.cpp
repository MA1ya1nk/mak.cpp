#include<iostream>
using namespace std;
class node{
    public:
       int data;
       node* left;
       node* right;

    node(int data){
        this->data=data;
        this->right=NULL;
        this->left=NULL;
    }   

};
node* buildtree(node* root){
    int data;
    cout<<"enter the data "<<endl;
    cin>>data;
    root=new node(data);

       if(data == -1){
        return NULL;
       }
       cout<<"inserting data for left of "<<data<<endl;
       root->left=buildtree(root->left);

       cout<<"inserting data for right of "<<data<<endl;
       root->right=buildtree(root->right);

        return root;

}
void printtree(node* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<endl;
    printtree(root->left);
    printtree(root->right);

    return ;
}
int main(){
    node* root=NULL;
    root=buildtree(root);
    printtree(root);

}