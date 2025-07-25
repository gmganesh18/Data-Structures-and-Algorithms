#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void combSum(vector<int>&nums,int target,vector<vector<int>>&ans){
    int n=nums.size();
    for(int i=0;i<n;i++){
        vector<int>temp;
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            temp.push_back(nums[j]);
            if(sum==target){
                ans.push_back(temp);
            }
            if(sum>target){
                break;
            }
        }
    }
}
int main(){
    vector<int>nums={2,3,6,1,7};
    int target=7;
    vector<vector<int>>ans;
    combSum(nums,target,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}