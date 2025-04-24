#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={4,8,2,11,6,20,15};
    int n=arr.size();
    int k=3;
    priority_queue<int,vector<int>,greater<int>>minHeap;
    for(int i=0;i<n;i++){
        minHeap.push(arr[i]);
        if(minHeap.size()>k){
            minHeap.pop();
        }
    }
    while(minHeap.size()>0){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }

}