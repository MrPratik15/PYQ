#include<bits/stdc++.h>
using namespace std;
int SecoundLargest(vector<int>& nums){
    int largest = INT_MIN;
    int Secound = INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>largest){
            Secound= largest;
            largest=nums[i];
           

        }
        else if(nums[i]<largest && nums[i] >Secound){
            Secound= nums[i];
        }
    }
    if(Secound==INT_MIN){
        return -1;
    }
return Secound;
}
int main(){
    int n;cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int SL=SecoundLargest(nums);
    cout<<SL;

}