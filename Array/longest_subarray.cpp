#include<iostream>
#include<vector>
using namespace std;

/*int subarray(int a[],int n){
    int len=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum +=a[k];
                if(sum==k)
                    len=max(len,j-i+1);
            }
        }
    }
    return len;
}*/
int subArrayWithsumOfK(vector<int> &a,long long k){
    int n= a.size();
    int left=0,right=0;
    int maxLen =0;
    long long sum= a[0];
    while(right<n){
        while(left <= right && sum > k){
            sum -= a[left];
            left++;
        }
        if(sum==k){
            maxLen=max(maxLen,right-left+1);
        }
        right++;
        if(right<n){
            sum +=a[right];
        }
    }
    return maxLen;
}

int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int k;
    cout<<"Enter the value:";
    cin>>k;
    vector<int> a(n);
    cout<<"Enter the element:"<<" ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Longest subarray sum:"<<subArrayWithsumOfK(a,k);

    return 0;

}