#include<iostream>
using namespace std;

int max_consequtive(int a[],int n){
    int maxi=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i] ==1){
            cnt++;
            maxi=max(cnt,maxi);
        }else cnt=0;
        
    }
    return maxi;
}

int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    cout<<"Enter the element:"<< " ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Max Consequtive:" <<max_consequtive(a,n);
    return 0;
}