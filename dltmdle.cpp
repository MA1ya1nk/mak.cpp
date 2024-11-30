#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[100];
  stack<int> st;
  st.push(2);
  st.push(4);
  st.push(1);
  st.push(10);
  st.push(10);
 st.push(10);
 st.push(10);
  
  int n=st.size();
  for(int i=1;i<=(st.size()/2);i++){
     arr[i-1]=st.top();
     st.pop();

  }
  st.pop();
 for(int i=0;i<n/2;i++){
   st.push(arr[i]);
 }

cout<<st.size();
}