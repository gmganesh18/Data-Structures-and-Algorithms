#include<iostream>
#include<vector>
using namespace std;
int NumberOfTimesArrayRotated(vector<int>&nums,int n){
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        int next=(mid+1)%n;
        int prev=(mid+n-1)%n;
        if(nums[mid]<nums[next] && nums[mid]<nums[prev]){
            return mid;
        }
        else if(nums[mid]>=nums[left]){
            left=mid+1;
        }
        else if(nums[mid]<=nums[right]){
            right=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int>nums={6,7,8,9,1,2,3,4,5};
    // vector<int>nums={6};
    int n=nums.size();
    int result=NumberOfTimesArrayRotated(nums,n);
    cout<<n-result<<endl;
}