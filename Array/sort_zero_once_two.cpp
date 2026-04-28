#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void sortZerosOncesTwo(vector<int> &a){
    int n= a.size();
    /*Brute
    int cnt0=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cnt0++;
        }else if(a[i]==1){
            cnt1++;
        }else{
            cnt2++;
        }
    }
    int idx=0;
    for(int i=0;i<cnt0;i++){
        a[idx++]=0;
        
    }
    for(int i=0;i<cnt1;i++){
        a[idx++]=1;
        
    }
    for(int i=0;i<n;i++){
        a[idx++]=2;
    }*/


    /*optimal-Dutch national flag*/
    int low=0, mid=0, high=n-1;

    while(mid<=high){
        if(a[mid]==0){
            swap(a[mid],a[low]);
            low++;
            mid++;
        }else if(a[mid] == 1){
            mid++;
        }else{
            swap(a[mid],a[high]);
            high--;
        }
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

    sortZerosOncesTwo(a);
    cout<<"sorted array:";
    for(int x:a){
        cout<<x<<" ";
    }
    return 0;

}