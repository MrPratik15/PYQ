#include<bits/stdc++.h>
using namespace std;
long long digit(long long n){
    long long count=0;
    while(n!=0){
        count++;
        n=n/10;
        

    }
    return count;
}
    
int  main(){
    long long n;
    cin>>n;
  long long co=digit(n);
   cout<<co;
}