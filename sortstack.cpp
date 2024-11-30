#include<iostream>
#include<stack>
using namespace std;
void sorted(stack<int>&st,int num){
    if(st.empty()){
        st.push(num);
        return ;
    }
    if(num>st.top()){
        st.push(num);
        return ;
    }
    int a=st.top();
    st.pop();
    sorted(st,num);
    st.push(a);
}
void sort(stack<int>&st){
    if(st.empty()){
        return ;
    }
    int num=st.top();
    st.pop();
    sort(st);
    sorted(st,num);

}
int main(){
stack<int> st;
st.push(23);
st.push(-3);
st.push(0);
st.push(-22);
st.push(-11);
st.push(100);
 sort(st);
 while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
 }
}