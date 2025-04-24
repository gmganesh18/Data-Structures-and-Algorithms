#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>prevSmallerElement(vector<int>nums,int n){
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        bool found=false;
        for(int j=i-1;j>=0;j--){
            if(nums[i]>nums[j]){
                ans.push_back(nums[j]);
                found=true;
                break;
            }
        }
        if(!found){
            ans.push_back(-1);
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<int>nums={4,5,2,10,8};
    int n=nums.size();
    vector<int>result=prevSmallerElement(nums,n);
    for(int item:result){
        cout<<item<<" ";
    }
}