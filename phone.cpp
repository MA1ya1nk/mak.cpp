#include<iostream>
#include<vector>
using namespace std;
string alpha(int num){
    if(num==2){
     return "abc";
    }
    if(num==3){
        return "def";
    }
    if(num==4){
        return "ghi";
    }
    if(num==5){
        return "jkl";
    }
    if(num==6){
        return "mno";
    }
    if(num==7){
        return "pqrs";
    }
    if(num==8){
        return "tuv";
    }
    if(num==8){
        return "wxyz";
    }
}
void phone(string str,int index,vector<char>output,vector<vector<char>> &ans){
      if(index>=str.length()){

      }
     
}
int main(){
    string str;
    cout<<"enter the string"<<endl;
    cin>>str;
    vector<vector<char>> ans;
    vector<char> output;
    int index=0;
     phone(str,index,output,ans);

}