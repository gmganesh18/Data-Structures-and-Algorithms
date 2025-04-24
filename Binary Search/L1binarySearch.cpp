#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&nums,int n,int target){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target)return mid;
        else if(nums[mid]>target)end=mid-1;
        else start=mid+1;
    }
    return -1;
}
int main(){
    vector<int>nums={1,2,3,4,5,6,7,8};
    int n=nums.size();
    int target=1;
    int result=binarySearch(nums,n,target);
    cout<<"Index is given by:"<<result<<endl;
}