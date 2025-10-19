#include<iostream>
using namespace std;

bool palindromeCheck(char str[],int start,int end){
    if(start>=end)
        return true;
    if(str[start]!=str[end])
        return false;
    return palindromeCheck(str,start+1,end-1);
}

int main(){
    char str[500];
    cin>>str;
    if(palindromeCheck(str,0,str.lenght()-1))
        cout<<"Palindrome";
    else
        cout<<"Not a Palindrome";
    return 0;
}