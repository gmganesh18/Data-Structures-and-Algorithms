#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    vector<int>arr= {4,2,10,11,6,8};
    int k=3;
    int n=arr.size();
    priority_queue<int>maxih;
    for(int i=0;i<n;i++){
        maxih.push(arr[i]);
        if(maxih.size()>k){
            maxih.pop();
        }
    }
    cout<<maxih.top();
}