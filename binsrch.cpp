#include<iostream>
using namespace std;
int bsearch(int arr[],int n,int element){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
while(s<=e){
    if(element == arr[mid]){
        return mid;
    }
    else if(element > arr[mid]){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=(s+e)/2;

}
return -1;
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[100];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int element;
    cout<<"enter the element to search";
    cin>>element;
    cout<<bsearch(arr,n,element);


}
