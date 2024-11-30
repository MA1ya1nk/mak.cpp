#include<iostream>
#include<string>
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
node* buildtree(node* &root){
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
void preorder(node* root){
    if(root == NULL){
        return ;
            }
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);

}

int main(){
    // node* root=NULL;
    // buildtree(root);
    // cout<<"hello";
    // preorder(root);
    // 1 2 -1 -1 2 -1 -1
    string str="mayank";
    str.pop_back();
    cout<<str<<endl;
    str.pop_front();
    cout<<str<<endl;

}