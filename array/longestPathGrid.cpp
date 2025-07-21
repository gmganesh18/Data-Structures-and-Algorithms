#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int longestPathh=-1;
void longestPath(int i,int j,int M,int N,vector<vector<int>>&grid,int path){
    if(i==M-1 && j==N-1){
        longestPathh=max(longestPathh,path);
        return;
    }
    if(j+1<M && grid[i][j+1]>grid[i][j]){
        longestPath(i,j+1,M,N,grid,path+1);
    }
    if(i+1<N && grid[i+1][j]>grid[i][j]){
        longestPath(i+1,j,M,N,grid,path+1);
    }
}
int longestPathGrid(vector<vector<int>>&grid){
    int N=3;
    int M=3;
    longestPath(0,0,M,N,grid,1);
    return longestPathh;
}
int main(){
    vector<vector<int>>grid={{1,2,3},{2,3,4},{3,4,5}};
    int result=longestPathGrid(grid);
    cout<<result;
}