#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(98);
    q.push(23);
    q.push(34);
    q.push(45);
    q.push(56);
    int k;
    cout<<"enter value of k ";
    cin>>k;
    stack<int> s;
    queue<int> qu;
    for(int i=0;i<k;i++){
        int ans=q.front();
        s.push(ans);
        q.pop();
    }
    while(!q.empty()){
        int ans=q.front();
        qu.push(ans);
        q.pop();
    }
    while(!s.empty()){
        int ans=s.top();
        q.push(ans);
        s.pop();
    }
    while(!qu.empty()){
        int ans=qu.front();
        q.push(ans);
        qu.pop();
    }
    cout<<q.front()<<endl;
    while(!q.empty()){
       cout<<q.front()<<" ";
       q.pop();
    }
    
}