#include <bits/stdc++.h>
using namespace std;
bool Armstrong(int n){
    int original=n;
    int sum=0;
    while(n>0){
        int digit =n%10;
        sum=sum+digit*digit*digit;
        n/=10;
        
    }
    if(sum==original){
        return true;
    }
    return false;

}int main(){
    int n;cin>>n;
    int p=Armstrong(n);
    cout<<p;
}