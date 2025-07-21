#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int brute(vector<int>&nums){
    int n=nums.size();
    for(int i=0;i<n;i++){
        int ele=nums[i];
        for(int j=i+1;j<n;j++){
            if(ele==nums[j]){
                return ele;
            }
        }
    }
    return 0;
}
int better(vector<int>&nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1]){
            return nums[i];
        }
    }
    return 0;
}
int mapMethod(vector<int>&nums,int n){
    unordered_map<int,int>map;
    for(int ele:nums){
        map[ele]++;
    }
    for(auto it=map.begin();it!=map.end();++it){
        if(it->second>=2){
            return it->first;
        }
    }
    return 0;
}
int main(){
    vector<int>nums={1,2,3,4,4,5};
    int n=nums.size();
    // int result=brute(nums);
    // int result=better(nums);
    int result=mapMethod(nums,n);
    cout<<result<<endl;
}