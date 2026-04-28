#include<iostream>
using namespace std;

bool checkPalindrome(string s, int i,int j){
    while(i<=j){
        if(s[i] !=s[j]){
            return false;
        }
        i++,j--;
    }
    return true;
}
bool validPalindrome(string s){
    int i=0,j=s.length()-1;
    while(i<=j){
        if(s[i] != s[j]){
            return checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1);
        }else{
            i++,j--;
        }
        
    }
    return true;
}


int main(){
    string s;
    cout<<"Enter your string:";
    cin>>s;
    bool result = validPalindrome(s);
    if(result == 1){
        cout<<"It is valid Palindrome!";
    }else{
        cout<<"It is not valid Palindrome!";
    }
    return 0;
}