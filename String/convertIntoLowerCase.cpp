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


void convertIntoLowerCase(char s[]){
    int n= getLength(s);
    for(int i=0;i<n;i++){
        s[i] = s[i] - 'A' + 'a';
    }
}


int main(){
    char s[100];
    cout<<"Enter Your String:";
    cin.getline(s,100);
    convertIntoLowerCase(s);
    cout<<"After Converting:"<<s;
    return 0;
}