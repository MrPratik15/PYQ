#include <bits/stdc++.h>
using namespace std;
int SumPrime(int n){
    while(n<2){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        return true;

    }
}
int main(){
    int n;cin>>n;
    for(int i=2;i<n;i++){
        if(SumPrime(i) && SumPrime(n-i)){
            cout<<i<<"+"<<n-i<<" ";
        }
    }

}