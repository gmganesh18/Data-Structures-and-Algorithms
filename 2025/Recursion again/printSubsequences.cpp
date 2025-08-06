#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printF(int idx,vector<int>&nums,vector<int>&ds,vector<vector<int>>&output,int n){
    if(idx>=n){
        output.push_back(ds);
        return;
    }
    ds.push_back(nums[idx]);
    printF(idx+1,nums,ds,output,n);
    ds.pop_back();
    printF(idx+1,nums,ds,output,n);

}
int main(){
    vector<int>nums={3,1,2};
    int n=nums.size();
    vector<vector<int>>output;
    vector<int>ds;
    printF(0,nums,ds,output,n);
    for(int i=0;i<output.size();i++){
        for(int j=0;j<output[i].size();j++){
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
    }
}