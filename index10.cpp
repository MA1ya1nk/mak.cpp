#include<iostream>
#include<stack>
using namespace std;
void insertatbot(stack<int> &s,int num){

    if(s.empty()){
        s.push(num);
        return ;
    }
    int ele=s.top();
    s.pop();
    insertatbot(s,num);
    s.push(ele);
    
}
void reverse(stack<int> &st){
    if(st.empty()){
        return ;
    }
    int num=st.top();
    cout<<num;
    st.pop();
    reverse(st);
    insertatbot(st,num);
  
}
void print(stack<int> &st){
    while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
    }
}

int main(){
  stack<int> st;
  st.push(5);
   st.push(4);
    st.push(3);
     st.push(2);
      st.push(1);
      

       print(st);
       cout<<endl;

      reverse(st);
      
      print(st);
       cout<<endl;
   
}
