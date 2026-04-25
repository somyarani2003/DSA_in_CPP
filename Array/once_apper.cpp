#include<iostream>
using namespace std;

int once_appear(int a[],int n){
    int temp=0;
    for(int i=0;i<n;i++){
        temp ^= a[i];
    }
    return temp;
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
    cout<<"Once appear element:"<<once_appear(a,n);
    return 0;
}