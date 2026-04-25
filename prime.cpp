#include<iostream>
using namespace std;

void prime(int n){
    int cnt=1;
    for(int i=2;i<=n;i++){
        if(n % i == 0){
            cnt++;
        }
    }
    if(cnt==2){
        cout<<"No. is Prime";
    }else{
        cout<<"No. is not prime";
    }
}


int main(){
    int num;
    cout << "Enter the no. :";
    cin >> num;
    prime(num);
    return 0;
}