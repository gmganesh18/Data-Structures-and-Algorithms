#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
int miniSum=INT_MAX;
void minimumSumCalc(int i,int j,int N,int M,vector<vector<int>>&grid,int sum){
    if(i==N-1 && j==M-1){
        miniSum=min(miniSum,sum);
        return;
    }
    //right traverse
    if(j+1<M)minimumSumCalc(i,j+1,N,M,grid,sum+grid[i][j+1]);
    //bottom traverse
    if(i+1<N)minimumSumCalc(i+1,j,N,M,grid,sum+grid[i+1][j]);
}
int minimumSum(vector<vector<int>>&grid){
    int N=grid.size();
    int M=grid[0].size();
    minimumSumCalc(0,0,N,M,grid,grid[0][0]);
    return miniSum;
}
int main(){
    vector<vector<int>>grid={{1,3,1},{1,5,1},{4,2,1}};
    int minSum=minimumSum(grid);
    cout<<minSum;
}