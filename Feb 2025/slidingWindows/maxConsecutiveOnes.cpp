// max consecutive ones with we can flip zeros at max k 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int longestBrute(vector<int>nums,int n,int k){
    int maxlen=0;
    int zeros;
    for(int i=0;i<n;i++){
        zeros=0;
        for(int j=i;j<n;j++){
            if(nums[j]==0){
                zeros++;
            }
            if(zeros<=k){
                maxlen=max(maxlen,j-i+1);
            }
            else{
                break;
            }
        }
    }
    return maxlen;
}
int longestBetter(vector<int>nums,int n,int k){
    int maxlen=0;
    int zeros=0;
    int left=0;
    int right=0;
    while(right<n){
        if(nums[right]==0){
            zeros++;
        }
        while(zeros>k){
            if(nums[left]==0)zeros--;
            left++;
        }
        if(zeros<=k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
    }
    return maxlen;
}
int longestBest(vector<int>nums,int n,int k){
    int maxlen=0;
    int zeros=0;
    int left=0;
    int right=0;
    while(right<n){
        if(nums[right]==0){
            zeros++;
        }
        if(zeros>k){
            if(nums[left]==0)zeros--;
            left++;
        }
        if(zeros<=k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
    }
    return maxlen;
}
int main(){
    vector<int>nums={1,1,1,0,0,0,1,1,1,1,0};
    int n=nums.size();
    int k=2;
    // int maximum=longestBrute(nums,n,k);
    // int maximum=longestBetter(nums,n,k);
    int maximum=longestBest(nums,n,k);
    cout<<maximum;
} 