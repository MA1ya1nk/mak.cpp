#include<bits/stdc++.h>
using namespace std;
class trienode{
    public:
    char ch;
    trienode* children[26];
    bool iscomplete;

    trienode(char data){
        ch=data;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        iscomplete=false;
    }
};
class trie{
     public:
    trienode* root;
    trie(){
     
        root=new trienode('\0');
    }
   

    void insertutil(trienode* root,string word){
        if(word.length() == 0){
           root->iscomplete = true;
           return ;
        }
        int index=word[0]-'A';
        trienode* child;

        if(root->children[index] != NULL){
            
            child=root->children[index];
        }
        else{
            child=new trienode(word[0]);
            root->children[index]=child;

        }
        
        insertutil(child,word.substr(1));

    }

    void insertword(string word){
       
        insertutil(root,word);
        
    }
    bool presentutil(trienode* root,string str){
        if(str.length() == 0){
            // cout<<root->iscomplete<<endl;
            return root->iscomplete;
        }
       int index=str[0]-'A';
        trienode* child;

        if(root->children[index] != NULL){
            
            child=root->children[index];
        }
        else{
           return false;

        }
        
       return presentutil(child,str.substr(1));


    }

    bool ispresent(string str){
        return presentutil(root,str);
    }
   
};
int main(){

    trie *t=new trie(); 
    t->insertword("WORK");
    // bool pre=t->ispresent("WO");
    // if(pre==true){
    //     cout<<"present";
    // }
    // else{
    //     cout<<"absent";
    // }
    cout<<"present or not "<<t->ispresent("work");


   
}