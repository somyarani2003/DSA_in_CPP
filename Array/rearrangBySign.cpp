#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void rearrangeBySign(vector<int> &a,int n){

    vector<int> pos;
    vector<int> neg;

    for(int i=0;i<n;i++){
        if(a[i] < 0){
            neg.push_back(a[i]);
        }else{
            pos.push_back(a[i]);
        }
    }

    for(int i=0;i<n/2;i++){
        a[2*i] = pos[i];
        a[2*i+1] = neg[i];
    }
}



int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the element:"<<" ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    rearrangeBySign(a,n);
    cout<<"After Rearranging:";
    for(int x:a){
        cout<<x<<" ";
    }
    return 0;
}