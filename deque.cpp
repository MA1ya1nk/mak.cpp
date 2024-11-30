#include<iostream>
#include<queue>
using namespace std;
int main(){
deque<int> d;
// d.push_back(90);
// d.push_front(89);
d.push_front(80);
d.push_front(23);
cout<<d.front()<<endl;
cout<<d.back()<<endl;
d.push_front(76);
cout<<d.front()<<endl;
cout<<d.back()<<endl;
d.push_front(761);
cout<<d.front()<<endl;
cout<<d.back()<<endl;
}

