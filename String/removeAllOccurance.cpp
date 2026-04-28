#include<iostream>
using namespace std;

string  removeAllOccurance(string s, string part){
    int pos = s.find(part);
    while(pos != string::npos){
        s.erase(pos,part.length());
        pos=s.find(part);
    }
    return s;
}


int main(){
    string s;
    cout<<"ENter your string:";
    cin>>s;
    string part;
    cout<<"Enter the part:";
    cin>>part;
    string result= removeAllOccurance(s,part);
    cout<<result;
    return 0;
}