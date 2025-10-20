#include<iostream>
using namespace std;

void removeChar(char str[],char ch,int index){
    if(str[index]=='\0')
        return;
    if(str[index]==ch){
        i=index;
        while(str[i]!='\0'){
            str[i]=str[i+1];
            i++;
        }
        removeChar(str,ch,index);
    }
    else
        removeChar(str,ch,index+1);
}

int main(){
    char str[500],ch;
    cin>>str;
    cin>>ch;
    cout<<removeChar(str,ch,0);
    return 0
}