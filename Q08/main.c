#include<stdio.h>
#include<stdbool.h>

bool sortCheck(int arr[],int n){
    if(n==0 || n==1)
        return true;
    if(arr[n-1]<arr[n-2])
        return false;
    return sortCheck(arr,n-1);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    if(sortCheck(arr,n))
        printf("Sorted");
    else
        printf("Unsorted");
    return 0;
}