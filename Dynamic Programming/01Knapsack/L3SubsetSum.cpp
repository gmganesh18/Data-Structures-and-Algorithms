#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool t[5+1][15+1];
void initialisation(){
    for(int i=0;i<5+1;i++){
        for(int j=0;j<15+1;j++){
            if(j==0){
                t[i][j]=true;
            }
            else if(i==0){
                t[i][j]=false;
            }
        }
    }
}
bool SubsetSum(vector<int>&arr,int sum,int n){
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
                t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][sum];
}
int main(){
    vector<int>arr={2,3,7,8,10};
    int n=arr.size();
    int sum=15;
    initialisation();
    bool result=SubsetSum(arr,sum,n);
    cout<<(result ? "true" :"false")<<endl;
}