#include<iostream>
using namespace std;
// void insertion(int arr[],int n){
     
// }
int main(){
int arr[7]={10,1,7,4,8,2,11};
    
    for(int i=1;i<7;i++){
          int temp=arr[i];
          if(arr[i-1]>temp){
              for(int j=i-1;j>=0;j--){
                if(arr[j]>temp){
                    arr[j+1]=arr[j];
                }
                else{
                    if(j==0){
                        arr[j+1]=arr[j];
                        arr[j]=temp;
                    }

                    else{
                        arr[j+1]=temp;
                    }
                }
              }
          }
    }
    // cout<<"hello";
    
}