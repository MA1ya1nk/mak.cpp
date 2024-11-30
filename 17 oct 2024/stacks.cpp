#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="mayankkumar";
    stack<char> st;
    for(int i=0;i<str.length();i++){
         char ch=str[i];
         st.push(ch);
    }
    string ans="";
    while(!st.empty()){
        char ch=st.top();
        st.pop();
        ans.push_back(ch);
    }

    cout<<"reverse of "<<str<<" is "<<ans;

}