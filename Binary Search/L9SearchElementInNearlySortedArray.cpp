#include<iostream>
#include<vector>
using namespace std;
int SearchElement(vector<int>&nums,int n,int target){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid-1]==target && mid-1>=start){
            return mid-1;
        }
        if(nums[mid+1]==target && mid+1<=end){
            return mid+1;
        }
        else if(nums[mid]>target){
            end=mid-2;
        }
        else if(nums[mid]<target){
            start=mid+2;
        }
    }
    return -1;
}
int main(){
    vector<int>nums={1,3,2,4,6,5};
    int n=nums.size();
    int target=6;
    int result=SearchElement(nums,n,target);
    cout<<result<<endl;
}