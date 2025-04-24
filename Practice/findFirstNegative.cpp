#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<int>nums={1,-3,2,-4,3,5,-6,-1,10,-11,12,14};
    int n=nums.size();
    vector<int>neg;
    int k=3;
    for(int i=0;i<n;i++){
        int temp=0;
        for(int j=i;j<i + k - 1;j++){
            if(nums[j]<0){
                temp=nums[j];
                break;
            }
        }
        if(temp!=0){
            neg.push_back(temp);
        }
        else{
            neg.push_back(0);
        }
    }
    for(int ele:neg){
        cout<<ele<<" ";
    }
}