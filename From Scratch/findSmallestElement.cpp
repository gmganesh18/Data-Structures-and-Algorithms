#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    vector<int>nums={1,2,3,4,5,8,9};
    int k=2;
    priority_queue<int>maxHeap;
    for(int i=0;i<nums.size();i++){
        maxHeap.push(nums[i]);
        if(maxHeap.size()>k){
            maxHeap.pop();
        }
    }
    cout<<maxHeap.top();
}