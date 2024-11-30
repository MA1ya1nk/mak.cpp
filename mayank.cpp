#include<iostream>
#include<stack>
using namespace std;
void dltmdle(stack<int> &st,int n,int count){
       if(count == n/2){
        st.pop();
        return ;
       }

    int num=st.top();
    st.pop();
    dltmdle(st,n,count+1);
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
    int count=0;
    dltmdle(st,n,count);
    for(int i=0;i<n-1;i++){
        cout<<st.top()<<endl;
        st.pop();
    }

 }