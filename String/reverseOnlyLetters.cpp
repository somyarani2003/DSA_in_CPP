#include<bits/stdc++.h>
#include<iostream>
using namespace std;

string reverseOnlyLetters(string s){
    int i=0,j=s.length()-1;
    while(i<j){
        if(isalpha(s[i]) && isalpha(s[j])){
            swap(s[i],s[j]);
            i++,j--;
        }else if(!isalpha(s[i])){
            i++;
        }else{
            j--;
        }
    }
    return s;
}

int main(){
    string s;
    cout<<"Enter your string:";
    getline(cin,s);
    cout<<reverseOnlyLetters(s);
    

    return 0;
}