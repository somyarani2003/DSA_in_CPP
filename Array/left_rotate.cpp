#include<iostream>
using namespace std;

void rotate(int a[],int n){
    int temp=a[0];
    for(int i=1;i<n;i++){
        a[i-1] =a[i];
    }
    a[n-1]=temp;
}


int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    cout<<"Enter the element:"<<" ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    rotate(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}