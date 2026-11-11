#include<bits/stdc++.h>
using namespace std;
int largest(vector<int> nums){
    int MAxi=INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>MAxi){
            MAxi=nums[i];
        }
    }
    return MAxi;
} 
int main(){
    int n; cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int LE= largest(nums);
    cout<<LE;
}
