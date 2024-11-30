#include<bits/stdc++.h>
using namespace std;
class trienode{
    public:
    char val;
    trienode* children[26];
    bool iscomplete;

    trienode(char ch){
        val=ch;
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
    void insertutil(trienode* root,string str){
        if(str.length()==0){
            root->iscomplete=true;
            return ;
        }
        int index=str[0]-'A';
        trienode* child;
        if(root->children[index]==NULL){
            child=new trienode(str[0]);
            root->children[index]=child;

        }
        else{
            child=root->children[index];
        }


        insertutil(child,str.substr(1));
    }
    
    void insertword(string str){
        insertutil(root,str);
    }

    bool presentutil(trienode* root,string str){
         if(str.length()==0){
            return root->iscomplete;
        }
        int index=str[0]-'A';
        trienode* child;
        if(root->children[index]==NULL){
            return false;
        }
        else{
            child=root->children[index];
        }


       return presentutil(child,str.substr(1));
    }

    bool ispresent(string str){
        return presentutil(root,str);
    }

};

int main(){

    trie* t=new trie();
    t->insertword("WORLD");
    t->insertword("WORK");
    t->insertword("WORD");
    
    if(t->ispresent("WORD")){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }

}