#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int getLength(char name[]){
    int length=0,i=0;
    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}


int main(){
    char name[100];
    cout<<"Enter your name:";
    cin>>name;
    cout<<"String Length is :"<<getLength(name);
    return 0;
}