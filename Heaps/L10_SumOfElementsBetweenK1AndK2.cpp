#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int SmallestElement(vector<int>&arr,int k,int n){
    priority_queue<int>maxHeap;
    for(int i=0;i<n;i++){
        maxHeap.push(arr[i]);
        if(maxHeap.size()>k){
            maxHeap.pop();
        }
    }
    return maxHeap.top();
}
int main(){
    vector<int>arr={1,3,12,5,15,11};
    int k1=3;
    int k2=6;
    int n=arr.size();
    int start=SmallestElement(arr,k1,n);
    int end=SmallestElement(arr,k2,n);
    int TotalSum=0;
    for(int ele:arr){
        if(ele>start && ele<end){
            TotalSum+=ele;
        }
    }
    cout<<TotalSum<<endl;
}


//one array given 
// two k1 and k2 given 
// we need to find 
// sum of elements between k1 and k2

// before that we need to find k1 smallest element and also k2 smallest element

// 12+11=23