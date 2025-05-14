#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
vector<int>FindDubAndMissing(vector<int>&nums,int n){
    int TotalSum=(n*(n+1))/2;
    int probSum=0;
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(nums[i]);
    }
    for(int ele:st){
        probSum+=ele;
    }
    int numsSum=0;
    for(int ele:nums){
        numsSum+=ele;
    }
    vector<int>result;
    result.push_back(numsSum-probSum);
    result.push_back(TotalSum-probSum);
    return result;
}
int main(){
    vector<int>nums={3,1,2,5,3};
    int n=nums.size();
    vector<int>result=FindDubAndMissing(nums,n);
    cout<<"Missing Element :"<<result[1]<<endl;
    cout<<"Dublicate Number :"<<result[0]<<endl;
}