#include<bits/stdc++.h>
using namespace std;
int main(){
   // string str="";
//    int num=stoi(str)-'0';
//    cout<<str<<endl;
int n;
cin>>n;
cout<<"hello"<<endl;
  int ans=0;
        while(n!=0){
            if(n&1==1){
                ans++;
            }
            n>>1;
        }
        cout<<"hello2"<<endl;
        cout<<ans;
}