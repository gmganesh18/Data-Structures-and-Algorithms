#include<iostream>
using namespace std;
int func(int arr[],int target,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={0,1,6,3,4};
    int target;
    cin>>target;
    int n=sizeof(arr)/sizeof(int);
    int result=func(arr,target,n);
    cout<<result<<endl;
}

    