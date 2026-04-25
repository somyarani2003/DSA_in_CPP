#include<iostream>
using namespace std;

void zero(int a[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(a[j] != 0){
            swap(a[i],a[j]);
            i++;
        }
        
    }
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
    zero(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}