#include<iostream>
using namespace std;

int largest(int arr[],int n){
    int lar=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]> lar){
            lar=arr[i];
        }
    }
    return lar;
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
    cout<<"largest Element:"<<largest(arr,n);
    
    return 0;
}