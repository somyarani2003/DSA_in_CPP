#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isIsomorphic(string s1,string s2){
    if(s1.length() != s2.length())return false;
    int hash[256] ={0};
    int comparehash[256] ={0};

    for(int i=0;i<s1.length();i++){
        if(hash[s1[i]] == 0 && comparehash[s2[i]] ==0 ){
            hash[s1[i]] = s2[i];
            comparehash[s2[i]] = true;
        }
    }
    for(int i=0;i<s1.length();i++){
        if(hash[s1[i]] != s2[i])return false;
    }
    return true;
}


int main(){
    string s1,s2;
    cout<<"Enter the first string:";
    cin>>s1;
    cout<<"Enter your second string:";
    cin>>s2;
    bool result = isIsomorphic(s1,s2);
    if(result==1){
        cout<<"It is Isomorphic string!";
    }else{
        cout<<"It is not Isomorphic!";
    }


    return 0;
}