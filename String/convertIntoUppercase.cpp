#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int getLength(char s[]){
    int i=0,length=0;
    while (s[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
    
}
void convertIntoUpeerCase(char s[]){
    int n=getLength(s);
    for(int i=0;i<n;i++){
        s[i]=s[i] - 'a' + 'A';
    }
}


int main(){
    char s[100];
    cout<<"Enter your string:";
    cin.getline(s,100);
    convertIntoUpeerCase(s);
    cout<<"After Converting:"<<s;
    return 0;
}