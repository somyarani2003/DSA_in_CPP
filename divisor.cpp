#include<iostream>
using namespace std;

void divisor(int n){
    for(int i=1;i<=n;i++){
        if(n % i == 0){
            cout << i << endl;
        } 
    }
}
int main(){
    int num;
    cout << "Enter the no. :";
    cin >> num;
    divisor(num);
    return 0;
}