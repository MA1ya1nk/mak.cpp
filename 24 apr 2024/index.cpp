#include<iostream>
using namespace std;
int sum(int arr[],int n,int index){
     if(index > n){
        return 0;
     }
     return arr[0]+sum(arr+1,n,index+1);

}

int main(){
    int n;
    cin>>n;
    int arr[100];
    cout<<"enter the array elements "<<endl;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    cout<<"sum is "<<sum(arr,n,1);

   
}