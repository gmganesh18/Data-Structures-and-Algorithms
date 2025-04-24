#include<iostream>
#include<vector>
using namespace std;
int FirstOccurrence(vector<int>&nums,int n,int target){
    int start=0;
    int end=n-1;
    int res=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            res=mid;
            end=mid-1;
        }
        else if(nums[mid]>target)end=mid-1;
        else start=mid+1;
    }
    return res;
}
int LastOccurrence(vector<int>&nums,int n,int target){
    int start=0;
    int end=n-1;
    int res=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            res=mid;
            start=mid+1;
        }
        else if(nums[mid]>target)end=mid-1;
        else start=mid+1;
    }
    return res;
}
int main(){
    vector<int>nums={1,2,3,3,3,4};
    int n=nums.size();
    int target=3;
    int result1=FirstOccurrence(nums,n,target);
    int result2=LastOccurrence(nums,n,target);
    cout<<"First Occurence index is given by:"<<result1<<endl;
    cout<<"Last Occurence index is given by:"<<result2<<endl;
}