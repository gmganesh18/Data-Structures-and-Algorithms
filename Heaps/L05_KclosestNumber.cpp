#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={2,3,5,6,7,8,9};
    priority_queue<pair<int,int>>maxHeap;
    int X=6;
    int k=3;
    int n=arr.size();
    for(int i=0;i<n;i++){
        maxHeap.push({abs(arr[i]-X),arr[i]});
        if(maxHeap.size()>k){
            maxHeap.pop();
        }
    }
    while(maxHeap.size()>0){
        cout<<maxHeap.top().second<<" ";
        maxHeap.pop();
    }
}