#include<iostream>
using namespace std;

int expand(string s,int i,int j){
    int cnt=0;
    while(i>=0 && j<s.length() && s[i] == s[j]){
        cnt++;
        i--,j++;
    }
    return cnt;
}
int countSubstring(string s){
    int n= s.length();
    int total =0;
    for(int i=0;i<n;i++){
        int odd = expand(s,i,i);
        total= total +odd;
        int even =expand(s,i,i+1);
        total=total+even;
    }
    return total;
}


int main(){
    string s;
    cout<<"Enter your string:";
    cin>>s;
    cout<<countSubstring(s);

    return 0;
}