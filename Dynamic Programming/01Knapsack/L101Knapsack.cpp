//recursion method
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int knapsack(vector<int>&wt,vector<int>&val,int W,int n){
    if(n==0 || W==0){
        return 0;
    }
    if(wt[n-1]<=W){
        return max(val[n-1]+knapsack(wt,val,W-val[n-1],n-1),knapsack(wt,val,W,n-1));
    }
    else if(wt[n-1]>W){
        return knapsack(wt,val,W,n-1);
    }
}
int main(){
    vector<int>wt={4, 5, 1};
    vector<int>val={1, 2, 3};
    int W=4;
    int n=wt.size();
    // int t[n+1][W+1];
    int result=knapsack(wt,val,W,n);
    cout<<result;
}