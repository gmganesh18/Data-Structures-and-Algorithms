// [6,2,3,4,7,2,1,7,1]
// here we can move from left and move from right but we can not move for 7 measn move till first 4 index and as same as last 4 index 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={6,2,3,4,7,2,1,7,1};
    int n=nums.size();
    int leftSum=0;
    int rightSum=0;
    int maxSum=0;
    int k=4;
    for(int i=0;i<k;i++){
        leftSum+=nums[i];
    }  
    maxSum=leftSum;
    int leftIndex=n-1;
    for(int i=k-1;i>=0;i--){
        leftSum-=nums[i];
        rightSum+=nums[leftIndex];
        leftIndex--;
        maxSum=max(maxSum,leftSum+rightSum);
    }
    cout<<maxSum<<endl;

}