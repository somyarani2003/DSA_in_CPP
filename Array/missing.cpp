#include<iostream>
using namespace std;

int missing(int a[],int n){
    int sum1=0, sum2=0;
    for(int i=1;i<=n;i++){
        sum1 ^=i;
    }
    for(int i=0;i<n-1;i++){
        sum2 ^=a[i];
    }
    return sum1^sum2;
}


int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int a[n-1];
    cout<<"Enter the element:"<<" ";
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    int temp=missing(a,n);
    cout<<temp;
    return 0;
}