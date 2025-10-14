#include<iostream>
using namespace std;

int sumofDigits(int n){
    if(n==0||n==1)
        return 1;
    return n%10+sumofDigits(n/10);
}

int main(){
    int n;
    cin>>n;
    cout<<sumofDigits(n);
    return 0;
}