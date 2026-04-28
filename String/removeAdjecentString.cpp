#include<iostream>
using namespace std;

string removeAllAdjacent(string s){
    string ans="";
    int n=s.length();
    int i=0;
    while(i<n){
        if(ans.length() >0 && ans[ans.length()-1] == s[i]){
            ans.pop_back();
        }else{
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;

}
int main(){
    string s;
    cout<<"Enter your String:";
    cin>>s;
    string result=removeAllAdjacent(s);
    cout<<result;
    return 0;
}