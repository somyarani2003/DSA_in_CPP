#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int majority(vector<int> &a,int n){

    /*Brute
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j])cnt++;
        }
        if(cnt>n/2){
            return a[i];
        }
    }
    return -1;*/

    /*Optimal- Moore's Voting Algorithmn*/

    int ele;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            ele =a[i];
        }else if(ele==a[i]){
            cnt++;
        }else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(a[i]=ele){
            cnt1++;
        }
        if(cnt1 > n/2){
            return ele;
        }
    }
    return -1;
}




int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the element:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Majority Element:"<<majority(a,n);

    return 0;
}