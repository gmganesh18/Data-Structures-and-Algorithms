#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(arr)/sizeof(int);
    int sum=0;
    int maxSum=arr[0];
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        maxSum=max(sum,maxSum);
    }
    cout<<maxSum<<endl;
}