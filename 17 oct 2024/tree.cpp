#include<iostream>
using namespace std;
class node{
  public:
  int data;
  node*left;
  node*right;

  node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
  }
};
node* buildtree(node* root){
   cout<<"enter the data"<<endl;
   int d;
   cin>>d;
   root=new node(d);

   if(d==-1){
    return NULL;
   }
   cout<<"enter data for left of "<<d<<endl;
   root->left=buildtree(root->left);
   cout<<"enter data for right of "<<d<<endl;
   root->right=buildtree(root->right);

   return root;

}

void preorder(node* &root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* &root){
    if(root==NULL){
        return ;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void inorder(node* &root){
    if(root==NULL){
        return ;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    node* root=NULL;

    root=buildtree(root);
    cout<<endl;
    preorder(root);
     cout<<endl;
    postorder(root);
     cout<<endl;
    inorder(root);
     cout<<endl;



}