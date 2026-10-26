#include<bits/stdc++.h>
using namespace std;
bool Pallindrome(int nums){
    int reverse=0;
    int original=nums;
    while(nums!=0){
       int digit=nums%10;
       reverse=reverse*10+digit;
       nums=nums/10;
    }if(original==reverse){
        return true;
    }
    return false;
    
}

int main(){
    int nums;cin>>nums;
    if(Pallindrome(nums)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}
