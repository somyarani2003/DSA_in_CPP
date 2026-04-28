#include<iostream>
using namespace std;

int main(){
    string s1;
    cout<<"Enter First String:";
    cin>>s1;
    string s2;
    cout<<"Enter Second String:";
    cin>>s2;
    if(s1.compare(s2)==0){
        cout<<"Both string are same!";
    }else{
        cout<<"Not Same!";
    }
    return 0;
}