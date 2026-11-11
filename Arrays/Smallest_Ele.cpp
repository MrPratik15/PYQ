#include<bits/stdc++.h>
using namespace std;
int Smallest(vector<int> &nums){
    int mini=INT_MAX;
    for(int i=0;i<nums.size();i++){
        if (nums[i] <mini){
            mini=nums[i];

        }
    }
    return mini;

}
int main(){
    int n;cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int SE=Smallest(nums);
    cout<<SE;
}