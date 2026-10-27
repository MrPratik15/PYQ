#include<bits/stdc++.h>
using namespace std;
long long int LCM (vector<int> nums){ 
    long long ans=nums[0];
    for(int i=1;i<nums.size();i++){
        ans =(ans/__gcd(ans,(long long)nums[i]))*nums[i];

    }
    return ans;
}
int main (){
    int n;cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];

    }
   long long int LM=LCM(nums);
    cout<<LM<<" ";
}