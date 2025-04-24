#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&nums,int n,int target){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target)return mid;
        else if(nums[mid]>target)start=mid+1;
        else end=mid-1;
    }
    return -1;
}
int main(){
    vector<int>nums={8,7,6,5,4,3,2,1};
    int n=nums.size();
    int target=5;
    int result=binarySearch(nums,n,target);
    cout<<"Index is given by:"<<result<<endl;
}