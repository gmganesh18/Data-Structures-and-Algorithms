//count the number of subarray with given sum
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
int main(){
    vector<int>arr={1,2,3,3};
    // vector<int>arr={1,2,4,6,10,12};
    int sum=6;
    int n=arr.size();
    initialisation(n,sum);

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
                t[i][j]=t[i-1][j-arr[i-1]] + t[i-1][j];
            }
            else if(arr[i-1]>j){
                t[i][j]=t[i-1][j];
            }
        }
    }
    cout<<t[n][sum];
}



//this code is written by me by after learnt form legend aditya verma
