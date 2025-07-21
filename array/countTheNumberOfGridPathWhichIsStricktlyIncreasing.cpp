#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int totalGrid=0;
int M=3,N=3;
void countThePaths(int i,int j,vector<vector<int>>&grid){
    if(i==N-1 && j==M-1){
        totalGrid++;
        return;
    }
    //right
    if(j+1<M && grid[i][j+1]>grid[i][j])countThePaths(i,j+1,grid);
    //bottom
    if(i+1<N && grid[i+1][j]>grid[i][j])countThePaths(i+1,j,grid);
}
int countPath(vector<vector<int>>&grid){
    countThePaths(0,0,grid);
    return totalGrid;
}
int main(){
    vector<vector<int>>grid={{1,2,3},{2,3,4},{3,4,5}};
    int result=countPath(grid);
    cout<<result<<endl;
}