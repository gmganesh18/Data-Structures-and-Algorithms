// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<set>
// #include<string>
// using namespace std;
// void subset(vector<int>&nums,int index,vector<int>&ds,set<vector<int>>&ans){
//     if(index==nums.size()){
//         ans.insert(ds);
//         return;
//     }
//     ds.push_back(nums[index]);
//     subset(nums,index+1,ds,ans);
//     ds.pop_back();
//     subset(nums,index+1,ds,ans);
//     return;
// }
// int main(){
//     vector<int>nums={1,2,2};
//     set<vector<int>>ans;
//     vector<int>ds;
//     subset(nums,0,ds,ans);
//     for(const auto& subsets:ans){
//         for(const auto& ele:subsets){
//             cout<<ele<<" ";
//         }
//         cout<<endl;
//     }
// }


#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
using namespace std;
void subset(vector<int>&nums,int index,vector<int>&ds,vector<vector<int>>&ans){
    if(index==nums.size()){
        ans.push_back(ds);
        return;
    }
    ds.push_back(nums[index]);
    subset(nums,index+1,ds,ans);
    ds.pop_back();
    subset(nums,index+1,ds,ans);
    return;
}
int main(){
    vector<int>nums={1,2,2};
    // set<vector<int>>ans;
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    vector<int>ds;
    subset(nums,0,ds,ans);
    for(const auto& subsets:ans){
        for(const auto& ele:subsets){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}