#include<iostream>
#include<stack>
using namespace std;
void atbottom(stack<int>&st,int num){
    if(st.empty()){
        st.push(num);
        return ;
    }
    if(st.top()<num){
         st.push(num);
         return ;
    }
    int a=st.top();
    st.pop();
    atbottom(st,num);
    st.push(a);
}
void sorted(stack<int>&st,int n){
    if(st.empty()){
        return ;
    }
    int num=st.top();
    st.pop();
    sorted(st,n);
     atbottom(st,num);

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
    sorted(st,n);
    for(int i=0;i<n;i++){
        cout<<st.top()<<endl;
        st.pop();
    }


    
}