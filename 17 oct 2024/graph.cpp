#include<bits/stdc++.h>
using namespace std;
class graph{
    public:
    unordered_map<int,list<int>> adj;

    void addedge(int u,int v, bool direction){
         adj[u].push_back(v);
         adj[v].push_back(u);
    }

    void print(){
       for(auto i:adj){
        cout<<i.first<<"-> ";
        for(auto j:i.second){
            cout<<j<<", ";
        }
        cout<<endl;
       }
    }
};
int main(){
   graph g;
   int n;
   cout<<"enter number of nodes";
   cin>>n;
   int m;
   cout<<"enter number of edges";
   cin>>m;

   for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    g.addedge(a,b,0);
   }
   g.print();

}