#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void permutation(vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans,vector<int>&freq,int n){
    if(ds.size()==n){
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<n;i++){
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i]=1;
            permutation(nums,ds,ans,freq,n);
            ds.pop_back();
            freq[i]=0;
        }
    }
}
void permute(vector<int>&nums,int n){
    vector<vector<int>>ans;
    vector<int>ds;
    vector<int>freq(n,0);
    permutation(nums,ds,ans,freq,n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<int>nums={1,2,3};
    int n=nums.size();
    permute(nums,n);
}