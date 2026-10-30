#include<bits/stdc++.h>
using namespace std;
int perfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        return true;

    }
    return false;
}
int main(){
    int n;cin>>n;
    int p=perfect(n);
    cout<<p;
}