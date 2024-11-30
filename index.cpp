#include<iostream>
using namespace std;
class stack{
public:
int arr[100];
int size;
int top;

stack(int size){
    this -> size=size;
    
    top=-1;
}

void push(int element){
    if(size-top>1){
        top++;
        arr[top]=element;
    }
    else{
        cout<<"stack overflow"<<endl;
    }

}

void pop(){
    if(top >= 0){
        top--;
    }
    else{
        cout<<"stack underflow"<<endl;
    }

}

int peak(){
    if(top >= 0){
        return arr[top];
    }
    else{
        cout<<"stack is empty"<<endl;
    }

}

bool isempty(){
    if(top == -1){
        return true;
    }
    else{
       return false;
    }

}

};
int main(){
    stack st(4);

    st.push(2);
    st.push(4);
    st.push(6);
    st.push(2);
    st.push(4);
    st.push(6);
    
    cout<<st.peak()<<endl;;
    st.pop();
    cout<<st.peak()<<endl;
    st.pop();
    st.pop();
    if(st.isempty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

}