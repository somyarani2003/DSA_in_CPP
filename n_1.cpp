#include<iostream>
using namespace std;

void f(int i, int n){
    if(i ==0)return;
    cout<< i << endl;
    f(i-1,n);
}


int main(){
    int num;
    cout <<"Enter the no. :";
    cin>>num;
    f(num,num);
    return 0;
}