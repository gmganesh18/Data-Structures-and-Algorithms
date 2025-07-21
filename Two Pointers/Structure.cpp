#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;
int main(){
    int k=14;
    vector<int>nums={3,4,7,10,12,2};
    int left=0;
    int right=0;
    int n=nums.size();
    int sum=0;
    int maxLen=INT_MIN;
    while(right<n){
        sum+=nums[right];
        while(sum>k){
            sum-=nums[left];
            left++;
        }
        if(sum<=k){
            maxLen=max(maxLen,right-left+1);
        }
        right++;
    }
    // cout<<maxLen<<endl;
    vector<int>result;
    for(int i=left;i<=right;i++){
        result.push_back(nums[i]);
    }
    for(int ele:result)cout<<ele<<" ";

}