#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int getLength(char s[]){
    int length=0,i=0;
    while(s[i] != '\0'){
        length++;
        i++;
    }
    return length;
}
void reverseString(char s[]){
    int i=0;
    int n=getLength(s);
    int j=n-1;
    while (i<= j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
    
}


int main(){
    char s[100];
    cout<<"Enter your string:";
    cin>>s;
    reverseString(s);
    cout<<"After Reversing:"<<s;
    return 0;
}