#include<iostream>
using namespace std;
void lowerbound(int arr[],int target,int n){
    int low=0,high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=target){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int arr[]={1,2,3,4,6,7};
    int target;
    cin>>target;
    int n=sizeof(arr)/sizeof(int);
    lowerbound(arr,target,n);

}