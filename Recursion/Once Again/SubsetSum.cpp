#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void subSet(vector<int>&nums,int sum,int index,vector<int>&result){
    if(index==nums.size()){
        result.push_back(sum);
        return;
    }
    // sum+=nums[index];
    subSet(nums,sum+nums[index],index+1,result);
    // sum-=nums[index];do this when we pass sum by reference
    subSet(nums,sum,index+1,result);
    return;
}
int main(){
    vector<int>nums={3,1,2};
    vector<int>result;
    int sum=0;
    subSet(nums,sum,0,result);
    sort(result.begin(),result.end());
    for(int ele:result){
        cout<<ele<<" ";
    }
}