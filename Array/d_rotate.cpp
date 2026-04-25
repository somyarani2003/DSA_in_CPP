#include<iostream>
#include<vector>
using namespace std;

void d_rotate(int a[],int n,int d){
    vector<int> temp;
    for(int i=0;i<d;i++){
        temp.push_back(a[i]);
    }
    for(int i=d;i<n;i++){
        a[i-d]= a[i];
    }
    int i=0;
    for(int j=n-d;j<n;j++){
        a[j]=temp[i];
        i++;
    }
}


int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int d;
    cout<<"Enter the size of d:";
    cin>>d;
    int a[n];
    cout<<"Enter the element:"<<" ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    d_rotate(a,n,d);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}