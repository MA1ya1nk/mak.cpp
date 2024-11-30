#include<iostream>
using namespace std;
class human{
public:
int age;
int weight;
void setage(int a){
age=a;
}
int getage(){
    return age;
}
public:
void speak(){
    cout<<"can speak"<<endl;
}
};
class animal{
    public:
    void speak(){
        cout<<"sometimes speak"<<endl;
    }

};
class combine:public human,public animal{

};
int main(){
combine c;
c.animal::speak();
}