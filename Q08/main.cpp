#include<iostream>
using namespace std;

bool sortCheck(int arr[],int n){
    if(n==0||n==1)
        return true;
    if(arr[n-1]<arr[n-2])
        return false;
    return sortCheck(arr,n-1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(sortCheck(arr,n))
        cout<<"Sorted";
    else
        cout<<"Unsorted";
    return 0;
}