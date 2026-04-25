#include<iostream>
using namespace std;

int remove_dup(int arr[],int n){
    if(n==0)return 0;
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int arr[n];
    cout<<"Enter the element:"<<" ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp=remove_dup(arr,n);
    for(int i=0;i<temp;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}