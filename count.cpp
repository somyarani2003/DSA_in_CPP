#include<iostream>
using namespace std;

int count(int n){
    if(n==0)return 1;

    n=abs(n);
    int cnt =0;
    while(n>0){
        cnt++;
        n=n/10;
    }
    return cnt;
}

int main(){
    int num ;
    cout << "Enter the no. :";
    cin >> num;
    cout << "No. of digit :" << count(num);
    return 0;
}