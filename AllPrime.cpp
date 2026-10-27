#include<bits/stdc++.h>
using namespace std;
int Allprime(int N){
    if(N<2){
        return false;
    }
    for(int i=2;i<N;i++){
        if(N%i==0){
            cout<<i<<" ";
            N/=i;
            i--;
            
            
        }
    }

}
int main(){
    int N;cin>>N;
    int AP=Allprime(N);
    cout<<AP;
}