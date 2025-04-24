#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;
int main(){
    vector<int>nums={1,1,1,3,2,2,4};
    unordered_map<int,int>map;
    for(int ele:nums){
        map[ele]++;
    }
    int k=2;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minHeap;
    for(auto it=map.begin();it!=map.end();++it){
        minHeap.push({it->second,it->first});
        if(minHeap.size()>k){
            minHeap.pop();
        }
    }
    cout<<minHeap.top().second;
}