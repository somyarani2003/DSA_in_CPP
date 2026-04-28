#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void replaceSpace(char s[]){
    int n=strlen(s);
    for(int i=0;i<n;i++){
        if(s[i] == ' '){
            s[i]='@';
        }
    }
}


int main(){
    char s[100];
    cout<<"Enter your String: ";
    cin.getline(s,100);
    replaceSpace(s);
    cout<<s;
    return 0;
}