#include<bits/stdc++.h>
using namespace std;
int MinMax(int n){
    int maxi=INT_MIN;
    int mini=INT_MAX;
    while(n!=0){
        int digit=n%10;
        maxi=max(maxi,digit);
        mini=min(mini,digit);
        n=n/=10;
    }
    cout<<"maximum ="<<maxi<<endl;
    cout<<"Minimum ="<<mini;

}
int main(){
    int n;cin>>n;
    MinMax(n);
}