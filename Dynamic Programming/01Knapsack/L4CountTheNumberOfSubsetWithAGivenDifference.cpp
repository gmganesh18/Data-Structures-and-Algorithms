#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>>t;
void initialisation(int n,int sum){
    t.assign(n+1,vector<int>(sum+1,0));
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(j==0){
                t[i][j]=1;
            }
            else if(i==0){
                t[i][j]=0;
            }
        }
    }
}
int subsetSum(vector<int>&nums,int n,int sum){
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(nums[i-1]<=j){
                t[i][j]=t[i-1][j]+t[i-1][j-nums[i-1]];
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][sum];
}
int main(){
    vector<int>nums={1,1,2,3};
    int diff=1;
    int n=nums.size();
    int totalSum=0;
    for(int ele:nums){
        totalSum+=ele;
    }
    int sum=(diff+totalSum)/2;  //sum which is also known as S1(subset1) 
    initialisation(n,sum);
    int result=subsetSum(nums,n,sum);
    cout<<result<<endl;
}



