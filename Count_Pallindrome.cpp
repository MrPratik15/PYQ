#include<bits/stdc++.h>
using namespace std;
bool makePalindrome(int n){
    int original=n;
    int reverse =0;
    while(n>0){
        int digit =n%10;
        reverse=reverse*10+digit;
        n/=10;
    }
    if(original==reverse){
        return true;
    }
    return false;

} int main(){
    int l;int r;
    cin>>l;cin>>r;
    int count=0;
    for(int i=l;i<=r;i++){
        if(makePalindrome(i)){
            cout<<i<<endl;;
            count++;
        }
    }
    cout<<count;

}