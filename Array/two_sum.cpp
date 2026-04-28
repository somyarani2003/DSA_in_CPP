#include<bits/stdc++.h>
#include<iostream>
using namespace std;

pair<int,int> twoSum(vector<int> &a,int target){
    int n=a.size();
    
    /*Brute approach
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                return {i,j};
            }   
        } 
        
        
    }
    return {-1,-1};*/


    int left=0,right=n-1;
    int sum=0;
    sort(a.begin(),a.end());
    while(left<right){
        sum = a[left] + a[right];
        if(sum < target){
            left++;
        }else if(sum > target){
            right--;
        }else{
            return {left,right};
        }
    }
    return {-1,-1};
}



int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int target;
    cout<<"Enter the Target:";
    cin>>target;
    vector<int> a(n);
    cout<<"Enter the Element:"<<" ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    pair<int,int> ans= twoSum(a,target);
    if(ans.first !=-1){
        cout<<"Indices:"<<ans.first<<" "<<ans.second;

    }else{
        cout<<"pair not found";
    }
    return 0;
}