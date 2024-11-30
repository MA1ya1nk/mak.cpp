#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
// void interse(int arr1[],int m,int arr2[],int n){
//     int arr[100];
//     int x=0;
//     for(int i=0;i<m;i++){
//         int ele=arr1[i];
//         for(int j=0;j<n;j++){
//             if(ele==arr2[j]){
//                arr[x]=ele;
//                x++;
//                arr2[j]=-110;
//                break;
//             }
//         }
//     }

//     for(int i=0;i<x;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// vector<int> intersection(vector<int> arr1,vector<int> arr2){
//     vector<int> ans;
//     for(int i=0;i<arr1.size();i++){
//         int ele=arr1[i];
//         for(int j=0;j<arr2.size();j++){
//             if(ele==arr2[j]){
//                 ans.push_back(ele);
//                 arr2[j]=-100;
//                 break;
//             }
//         }
//     }
//     return ans;

// }


vector<int> inter(vector<int> arr1,vector<int> arr2){
    vector<int> ans;
    int i=0,j=0;
    int m=arr1.size();
    int n=arr2.size();

    while(i<m && j<n){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
int main(){
    // int arr1[]={1,4,6,6,7};
    // int arr2[]={4,6,6,7};
    // interse(arr1,5,arr2,4);

//     vector<int> arr1;
//     vector<int> arr2;
//     arr1.push_back(1);
//     arr1.push_back(3);
//     arr1.push_back(9);
//     // arr1.push_back(5);
//     // arr1.push_back(9);
//     // arr2.push_back(1);
//     arr2.push_back(9);
//     arr2.push_back(11);
//     arr2.push_back(15);
//     vector<int> arr;
//   arr = inter(arr1,arr2);
//   for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<<" ";
//   }

cout<<pow(2,3);



}