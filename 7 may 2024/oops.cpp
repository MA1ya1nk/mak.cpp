#include<iostream>
using namespace std;
class a{
   
   int i;
   friend int printi(a);
   public:
   a(){
    i=10;
   }
//    private:
//    friend int printi(a);
};
int printi(a p){
    p.i += 20;
   return p.i;
}
int main(){
    a p;
    cout<<printi(p);
    


}