#include<iostream>
#include<vector>
using namespace std;
int SearchFloor(vector<int>&nums,int n,int target){
    int start=0;
    int end=n-1;
    int element=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]<=target && nums[mid]>=element){
            element=nums[mid];
            start=mid+1;
        }
        else if(nums[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return element;
}
int main(){
    vector<int>nums={1,2,4,6,7};
    int n=nums.size();
    int target=5;
    int result=SearchFloor(nums,n,target);
    cout<<result<<endl;
}


//see L11 for proper code 
// here its vatrasi code