#include<iostream>
using namespace std;

int reverse(int n){
    
    int rev=0;
    while(n>0){
        int ld=n % 10;
        rev = rev * 10 + ld;
        n=n/10;
    }
    return rev;

}
int main(){
    int num;
    cout<< "Enter the no. :";
    cin >> num;
    cout << "Reverse no. :"<< reverse(num);
    return 0;
}