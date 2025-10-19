#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool palindromeCheck(char str[],int start,int end){
    if(start>=end)
        return true;
    if(str[start]!=str[end])
        return false;
    return palindromeCheck(str,start+1,end-1);

}

int main(){
    char str[500];
    scanf("%s",str);
    if(palindromeCheck(str,0,strlen(str)-1))
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}