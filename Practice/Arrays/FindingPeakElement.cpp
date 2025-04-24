#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int FindPeak(vector<int>&nums,int n){
    int maxi_index=0;
    int max_element=0;
    for(int i=0;i<n;i++){
        if(nums[i]>max_element){
            max_element=nums[i];
            maxi_index=i;
        }
    }
    return max_element;
}
int main(){
    vector<int>nums={1,2,4,1};
    int n=nums.size();
    int result=FindPeak(nums,n);
    cout<<"The Peak Element in the array is given by: "<<result<<endl;
}