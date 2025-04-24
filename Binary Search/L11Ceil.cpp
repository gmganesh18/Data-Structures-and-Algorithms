#include<iostream>
#include<vector>
using namespace std;
int findCeilValue(vector<int>&nums,int n,int target){
    int start=0;
    int end=n-1;
    int ele=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            return nums[mid];
        }
        else if(nums[mid]>target){
            ele=nums[mid];
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ele;
}
int main(){
    vector<int>nums={1,2,3,6,7,9,10};
    int n=nums.size();
    int target=5;
    int result=findCeilValue(nums,n,target);
    cout<<result<<endl;
}