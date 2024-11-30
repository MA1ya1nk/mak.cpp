#include<bits/stdc++.h>
using namespace std;
class tree{
  public:
  int data;
  tree* left;
  tree* right;

  tree(int data){
     this->data=data;
      this->left=NULL;
      this->right=NULL;
  }
};
tree* printtree(tree* root){
    int data;
    cin>>data;
    root=new tree(data);
     if(data==-1){
        return NULL;
     }
     root->left=printtree(root->left);
     root->right=printtree(root->right);

     return root;
}
void preordertraversal(tree* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<endl;
    preordertraversal(root->left);
    
    preordertraversal(root->right);


}

// void swap(int* a,int* b){
//     int c=*a;
//     *a=*b;
//     *b=c;
// }
void levelordertrav(tree* root){
       queue<tree*> lvl;
       lvl.push(root);
       lvl.push(NULL);
       while(!lvl.empty()){
           tree* temp=lvl.front();
           lvl.pop();
           if(temp==NULL){
           
            cout<<endl;
            if(!lvl.empty()){
                lvl.push(NULL);
            }
           }
          else{
           cout<<temp->data<<" ";
           if(temp->left){
            lvl.push(temp->left);
           }
            if(temp->right){
            lvl.push(temp->right);
           }
          }
       }
}
int main(){

    tree*root=NULL;
    cout<<"printing tree"<<endl;

    root=printtree(root);

    preordertraversal(root);
    levelordertrav(root);

    // int a=3;
    // int b=4;
    // swap(&a,&b);
    // cout<<a;
    // cout<<endl<<b;


}