#include<iostream>
using namespace std;
class queu{
    public:
    int*arr;
    int front;
    int rear;
    int size;
    queu(int size){
        this->size=size;
        arr=new int[size];
        front=0;
        rear=0;

    }

    void push(int data){
        if(rear<size){
            arr[rear]=data;
            rear++;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
 
     void pop(){
        if(front<size){
            front++;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
     }

     int front(){
        if(front<size){
        return arr[front];
        }
     }

     bool empty(){
        if(rear == front){
            return 1;
        }
        else{
            return 0;
        }
     }

    
};
int main(){
  
    queu q(5);
    q.push(2);
    q.push(21);
    q.push(23);
    cout<<q.front;



}