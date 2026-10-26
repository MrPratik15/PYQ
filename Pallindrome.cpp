#include<bits/stdc++.h>
using namespace std;
int Pallindrome(int n){
    int reverse=0;
    while(n!=0){
        reverse=n%10;
        n=n/10;
    }
    if(n==reverse){
        return true;
    }
    return false;
}
int main(){
    int n;cin>>n;
    int palli=Pallindrome(n);
    
}
