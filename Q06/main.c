#include<stdio.h>

int reverseNum(int n,int rev){
    if(n==0)
        return rev;
    return reverseNum(n/10,rev*10+(n%10));
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",reverseNum(n,0));
    return 0;
}