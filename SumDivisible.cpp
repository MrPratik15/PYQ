#include<bits/stdc++.h>
using namespace std;
int SumDiv(int n){
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    if(sum%3==0){
        return true;
    }
    return false;
}
int main(){
    int n;cin>>n;
    if(SumDiv(n)){
        cout<<"Divisible";
    }else{
        cout<<"Not Divisible";
    }
}
