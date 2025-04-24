#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
vector<int>RemoveDub(vector<int>&nums,int n){
    vector<int>result;
    // result.push_back(nums[0]);
    // for(int i=1;i<n;i++){
    //     if(result.back()!=nums[i]){
    //         result.push_back(nums[i]);
    //     }
    //     else{
    //         continue;
    //     }
    // }
    unordered_map<int,int>map;
    for(int i=0;i<n;i++){
        map[nums[i]]++;
    }
    for(auto ele:map){
        if(ele.second<2){
            result.push_back(ele.first);
        }
    }
    return result;
}
int main(){
    vector<int>nums={1,2,2,3,3,4,5,5,6,6,7};
    int n=nums.size();
    vector<int>result=RemoveDub(nums,n);
    sort(result.begin(),result.end());
    for(int ele:result){
        cout<<ele<<" ";
    }
}