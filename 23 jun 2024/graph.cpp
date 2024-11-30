#include<bits/stdc++.h>
using namespace std;
class graph{
   public:
   map<int,list<int>> node;

   void buildgraph(int u,int v,bool isdirected){

   } 
};
void reverse(queue<int>& qu){
    if(qu.empty()){
        return ;
    }
    int first=qu.front();
    qu.pop();
    reverse(qu);
    qu.push(first);

}
int main(){
//     vector<vector<int>> arr;
//     arr[2].push_back(3);
//     arr[0].push_back(1);
//     arr[1].push_back(99);
//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){
//             cout<<arr[i][j]<<" ";
//         }
// cout<<endl;
//     }
// cout<<"hello";
queue<int> qu;
qu.push(1);
qu.push(2);
qu.push(3);
qu.push(4);
// cout<<qu.front();
// while(qu.empty()){
//     cout<<qu.front()<<" ";
//     qu.pop();
// }
reverse(qu);
while(!qu.empty()){
    cout<<qu.front()<<" ";
    qu.pop();
}




}