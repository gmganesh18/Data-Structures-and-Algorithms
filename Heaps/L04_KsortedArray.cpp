#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={6,5,3,2,8,10,9};
    int n=arr.size();
    int k=3;
    vector<int>newArray;
    priority_queue<int,vector<int>,greater<int>>minHeap;
    for(int i=0;i<n;i++){
        minHeap.push(arr[i]);
        if(minHeap.size()>k){
            newArray.push_back(minHeap.top());
            minHeap.pop();
        }
    }
    while(minHeap.size()>0){
        newArray.push_back(minHeap.top());
        minHeap.pop();
    }
    for(int ele:newArray){
        cout<<ele<<" ";
    }
}
