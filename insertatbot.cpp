#include<iostream>
#include<stack>
using namespace std;
void insertatbot(stack<int>&st,int count,int n,int x){
    if(count == n){
        st.push(x);
        return ;
    }
int num=st.top();
st.pop();
insertatbot(st,count+1,n,x);
st.push(num);

}
int main(){
    stack<int> st;
    int n;
    cout<<"enter the number of element in stack ";
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        st.push(num);
    }
    int x;
    cout<<"enter the number unsert at bottom ";
    cin>>x;
     int count=0;
     insertatbot(st,count,n,x);
     for(int i=0;i<=n;i++){
        cout<<st.top()<<endl;
        st.pop();
    }

}