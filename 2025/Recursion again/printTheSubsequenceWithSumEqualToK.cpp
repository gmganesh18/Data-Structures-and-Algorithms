#include<iostream>
#include<vector>
using namespace std;
void printF(int idx,vector<int>&nums,int sum,vector<int>&ds,int k,vector<vector<int>>&output,int n){
    if(idx==n){
        if(sum==k){
            output.push_back(ds);
        }
        return;
    }
    ds.push_back(nums[idx]);
    sum+=nums[idx];
    printF(idx+1,nums,sum,ds,k,output,n);
    ds.pop_back();
    sum-=nums[idx];
    printF(idx+1,nums,sum,ds,k,output,n);
}
int main(){
    vector<int>nums={1,2,1};
    int n=nums.size();
    int k=2;
    vector<vector<int>>output;
    vector<int>ds;
    printF(0,nums,0,ds,k,output,n);
    for(int i=0;i<output.size();i++){
        for(int j=0;j<output[i].size();j++){
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
    }
}