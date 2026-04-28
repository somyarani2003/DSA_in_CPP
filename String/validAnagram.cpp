#include<iostream>
#include<algorithm>
using namespace std;

/*bool isAnagram(string s1,string s2){
    if(s1.length() != s2.length())return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1 != s2){
        return false;
    }
    return true;

}
*/

/*Frequency check*/
bool isAnagram(string s1,string s2){
    int freq[256] ={0};
    for(int i=0;i<s1.length();i++){
        freq[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++){
        freq[s2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(freq[i] !=0){
            return false;
        }
    }
    return true;
}



int main(){
    string s1,s2;
    cout<<"Enter first string:";
    cin>>s1;
    cout<<"Enter second string:";
    cin>>s2;
    bool result =isAnagram(s1,s2);
    if(result ==1){
        cout<<"It is valid Anagram!";
    }else{
        cout<<"It is not valid Anagram!";
    }

    return 0;
}