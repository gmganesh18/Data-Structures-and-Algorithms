// frequency sort

#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;
struct Comparator {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second > b.second; // Ascending order for values when frequencies are equal
        }
        return a.first < b.first; // Descending order for frequencies
    }
};
int main(){
    vector<int>arr={1,1,1,3,2,2,8};
    // int n=arr.size();
    unordered_map<int,int>mp;
    // priority_queue<pair<int,int>>maxHeap;
    priority_queue<pair<int, int>, vector<pair<int, int>>, Comparator> maxHeap;
    for(int ele:arr){
        mp[ele]++;
    }
    for(auto i=mp.begin();i!=mp.end();i++){
        maxHeap.push({i->second,i->first});
        // maxHeap.push({i->second,i->first});

    }
    vector<int>newVec;
    while(maxHeap.size()>0){
        int num;
        // while(maxHeap.top().first!=0){
        //     newVec.push_back(maxHeap.top().second);
        // }
        num=maxHeap.top().first;
        while(num!=0){
            newVec.push_back(maxHeap.top().second);
            num--;
        }
        maxHeap.pop();
    }
    for(int ele:newVec){
        cout<<ele<<" ";
    }
}