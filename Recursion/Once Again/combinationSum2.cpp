// problem statement is like we need to find the combination target sum with lexiographical sorted order (just think like sorted order) with unique subsets
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void combination(int index,int target,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){
    if(target==0){
        ans.push_back(ds);
        return;
    }
    for(int i=index;i<nums.size();i++){
        if(i>index && nums[i]==nums[i-1])continue;
        if(nums[i]>target){
            break;
        }
        ds.push_back(nums[i]);
        combination(i+1,target-nums[i],nums,ds,ans);
        ds.pop_back();
    }
}
int main(){
    vector<int>nums={1,1,1,2,2};
    sort(nums.begin(),nums.end());
    int target=4;
    vector<vector<int>>ans;
    vector<int>ds;
    combination(0,target,nums,ds,ans);
    for (const auto& comb : ans) {
        for (int num : comb) {
            cout << num << " ";
        }
        cout << endl;
    }
    
}