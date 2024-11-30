#include<iostream>
using namespace std;
char max(string name){
    int arr[26]={0};
    for(int i=0;i<name.length();i++){
        char ch=name[i];
        int a=ch-'a'+0;
        arr[a]++;

    }
    int a=0;
    int index=-1;
    for(int j=0;j<26;j++){
         if(arr[j]>a){
            a=arr[j];
            index=j;
         }
    }
    return (index+'a');
}


int main(){
    string str="aaaaafffffffffzzzz";
    char ch=max(str);
    cout<<ch;

}