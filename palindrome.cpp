#include<iostream>
using namespace std;
void palindrome(int n){
    int dup= n;
    int rev =0;
    while (n>0){
        
        int ld = n%10;
        rev=rev * 10 + ld;
        n= n/10;
    }
    if(dup == rev){
        cout << "No. is Palindrome";
    }else{
        cout<<"No. is not palindrome";
    }  
}



int main(){
    int num;
    cout<< "Enter the no. :";
    cin >> num;
    palindrome(num);
    return 0;
}