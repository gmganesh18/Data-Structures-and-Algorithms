#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int>TwoSum(vector<int>&array,int n,int target){
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int curr=array[i];
        int targetReq=target-curr;
        if(mp.find(targetReq)!=mp.end()){
            return {mp[targetReq],i};
        }
        mp[array[i]]=i;
    }
    return {};
}
int main(){
    vector<int>array={1,2,4,10,14,40};
    int n=array.size();
    int target=24;
    vector<int>result=TwoSum(array,n,target);
    for(int ele:result){
        cout<<ele<<" ";
    }
}