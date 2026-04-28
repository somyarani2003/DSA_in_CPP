#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int maximumSubarraySum(vector<int> &a,int n){
    int maxi=INT_MIN;
    int sum=0;
    /*Brute
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<j;k++){
                sum +=a[k];
            }
            maxi = max(maxi,sum);
        }
        
    }*/

    /*Better
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum += a[j];
            maxi=max(sum,maxi);
        }
    }*/

    /*Kadanes algorithmn*/
    for(int i=0;i<n;i++){
        sum +=a[i];
        if(sum > maxi){
            maxi=sum;
        }
        if(sum < 0) sum=0;
    
    }
    return maxi;
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

    cout<<maximumSubarraySum(a,n);
    return 0;
}