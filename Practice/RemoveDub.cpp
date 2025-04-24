#include<iostream>
#include<vector>
using namespace std;
int countLen(vector<int>&nums,int ele){
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele){
                count++;
            }
        }
        return count;
    }
int main(){
    vector<int>nums={1,1,1,2,2,3};
    //                Output: 5, nums = [1,1,2,2,3,_]
    int count=0;
        for(int i=0;i<nums.size();i++){
            if(countLen(nums,nums[i])<=2){
                nums[count]=nums[i];
                count++;
            }
        }
    cout<<count;

}