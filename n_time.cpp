#include<iostream>
using namespace std;

void name(int i, int n){
    if(i > n)return;
    cout<< "Somya"<<endl;
    name(i+1,n);
    
    
}
int main(){
    int num;
    cout <<"Enter the no. :";
    cin>> num;
    name(1,num);
    return 0;
}