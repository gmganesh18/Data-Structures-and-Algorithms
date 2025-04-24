#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,5};
    int n=arr.size();
    int costSum=0;
    int sum;
    priority_queue<int,vector<int>,greater<int>>minHeap;
    for(int i=0;i<n;i++){
        minHeap.push(arr[i]);
    }
    while(minHeap.size()>=2){
        int val1=minHeap.top();
        minHeap.pop();
        int val2=minHeap.top();
        minHeap.pop();
        sum=val1+val2;
        costSum+=sum;
        minHeap.push(sum);
    }
    cout<<costSum<<endl;
}





// one array given
// in which each element in index defines that the length of the rope

// we need to minimise the cost 

// i mean  {1,2,3,4,5};

// 1+2 = 3 then if i consideer that 3 + 3 means = 6 ,then see 6 is greater so, 4+5 is 9 
// then total cost is 3+6+9+15=33
// this is the minimum cost

