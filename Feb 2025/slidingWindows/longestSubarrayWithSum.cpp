#include<iostream>
#include<vector>
using namespace std;
int LongestLengthOfSubarrayBrute(vector<int>nums,int k){
    int maxLen=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            if(sum<=k){
                maxLen=max(maxLen,j-i+1);
            }
        }
    }
    return maxLen;
}
int LongestLengthOfSubarrayBetter(vector<int>nums,int k){
    int n=nums.size();
    int maxLen=0;
    int l=0;
    int r=0;
    int sum=0;
    while(r<n){
        sum+=nums[r];
        if(sum<=k){
            maxLen=max(maxLen,r-l+1);
        }
        while(sum>k){
            sum-=nums[l];
            l++;
        }
        r++;
    }
    return maxLen;
}
int LongestLengthOfSubarrayOptimal(vector<int>nums,int k){
    int n=nums.size();
    int maxLen=0;
    int l=0;
    int r=0;
    int sum=0;
    while(r<n){
        sum+=nums[r];
        if(sum<=k){
            maxLen=max(maxLen,r-l+1);
        }
        if(sum>k){
            sum-=nums[l];
            l++;
        }
        r++;
    }
    return maxLen;
}
int main(){
    vector<int>nums={-1,2,3,3,4,5,-1};
    int k=4;
    // int result=LongestLengthOfSubarrayBrute(nums,k);
    // int result=LongestLengthOfSubarrayBetter(nums,k);
    int result=LongestLengthOfSubarrayOptimal(nums,k);
    cout<<result<<endl;
}