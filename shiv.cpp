#include<iostream>
#include<queue>
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
node* buildtree(node*root){
    
    cout<<"enter the data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }
    cout<<"enter the data for left of" <<data<<endl;
    root->left=buildtree(root->left);  
    cout<<"enter the data for right of" <<data<<endl;
    root->right=buildtree(root->right);
    return root;

}
void printtree(node*root){
    queue<int>q;
    if(root->data=-1){
        return ;
    }
    q.push(root->data);
    printtree(root->left);
    printtree(root->right);

    while(!q.empty()){
        cout<<q.front();
        q.pop_back();
        q.pop();

    }

}

int main(){
    node*root=NULL;
    root=buildtree(root);
}