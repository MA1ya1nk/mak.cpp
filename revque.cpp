#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(11);
    q.push(21);
    q.push(31);
    q.push(41);
    q.push(51); 
    
    queue<int>qu;
    while(!q.empty()){
        int ans=q.front();
        cout<<ans<<" ";
        qu.push(ans);
        q.pop();
    }
    cout<<endl;
    while(!qu.empty()){
        int ans=qu.front();
        q.push(ans);
        qu.pop();
    }
    cout<<endl;


    stack<int>s;
    cout<<q.front()<<endl;
    while(!q.empty()){
        int ans=q.front();
        s.push(ans);
        q.pop();
    }
    while(!s.empty()){
        int ans=s.top();
         q.push(ans);
         s.pop();
    }
   cout<<q.front()<<endl;
   while(!q.empty()){
        int ans=q.front();
        cout<<ans<<" ";
        qu.push(ans);
        q.pop();
    }
    cout<<endl;
    while(!qu.empty()){
        int ans=qu.front();
        q.push(ans);
        qu.pop();
    }
    cout<<endl;

}