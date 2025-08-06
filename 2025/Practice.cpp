#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
#include<unordered_map>
#include<stack>
using namespace std;
int main(){
    vector<int>nums={1,2,1,3,4,5};
    int n=nums.size();
    // set<int>st;
    // for(int i=0;i<n;i++){
    //     if(st.count(nums[i])){
    //         cout<<nums[i];
    //     }
    //     st.insert(nums[i]);
    // }

    unordered_map<int,int>map;
    for(int i=0;i<n;i++){
        map[nums[i]]=i;
    }
    for(auto it=map.begin();it!=map.end();++it){
        if(it->first==1){
            cout<<it->second;
        }
    }


}