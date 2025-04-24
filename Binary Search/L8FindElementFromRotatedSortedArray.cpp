#include<iostream>
#include<vector>
using namespace std;
int BinarySearchLeft(vector<int>&nums,int start,int end,int n,int target){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target)return mid;
        else if(nums[mid]>target)end=mid-1;
        else start=mid+1;
    }
    return -1;
}
int BinarySearchRight(vector<int>&nums,int start,int end,int n,int target){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target)return mid;
        else if(nums[mid]>target)end=mid-1;
        else start=mid+1;
    }
    return -1;
}
int FindMinEleIndex(vector<int>&nums,int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        int next=(mid+1)%n;
        int prev=(mid+n-1)%n;
        if(nums[mid]<nums[next] && nums[mid]<nums[prev]){
            return mid;
        }
        else if(nums[mid]>=nums[start]){
            start=mid+1;
        }
        else if(nums[mid]<=nums[end]){
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int>nums={9,10,11,12,2,3,4,5,6,7};
    int n=nums.size();
    int index=FindMinEleIndex(nums,n);
    int target=7;
    int result;
    if(target>nums[index] && target>=nums[0]){
        result=BinarySearchLeft(nums,0,index-1,index-1-0+1,target);
    }
    else{
        result=BinarySearchRight(nums,index,n-1,n-index,target);
    }
    cout<<result<<endl;
}