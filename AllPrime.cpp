#include<bits/stdc++.h>
using namespace std;
int Allprime(int N){
    int count=0;
    if(N<2){
        return false;
    }
    for(int i=2;i<N;i++){
        if(N%i==0);{
            cout<<i<<" ";
            N/=i;
            
        }
    }

}
int main(){
    int N;cin>>N;
    int AP=Allprime(N);
    cout<<AP;
}