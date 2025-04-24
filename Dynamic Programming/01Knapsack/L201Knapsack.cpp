//its top down method
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int t[3+1][4+1];
void initialise(){
    for(int i=0;i<3+1;i++){
        for(int j=0;j<4+1;j++){
            if(i==0 || j==0){
                t[i][j]=0;
            }
        }
    }
}
int knapsack(vector<int>&wt,vector<int>&val,int W,int n){
    // if(n==0 || W==0){
    //     return 0;
    // }
    // if(wt[n-1]<=W){
    //     return max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
    // }
    // else if(wt[n-1]>W){
    //     return knapsack(wt,val,W,n-1);
    // }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<W+1;j++){
            if(wt[i-1]<=j){
                t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][W];
    
}
int main(){
    vector<int>wt={4, 5, 1};
    vector<int>val={1, 2, 3};
    int W=4;
    int n=wt.size();
    initialise();
    int result=knapsack(wt,val,W,n);
    cout<<result;
}