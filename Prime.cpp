#include<bits/stdc++.h>
using namespace std;
int Prime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }return true;
}
int main(){
    int n;cin>>n;
    if(Prime(n)){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }
}