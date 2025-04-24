#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int x=6;
    int n=sizeof(arr)/sizeof(int);
    int low=0;
    int index=-1;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            index=mid;
            // low=mid+1;
            break;
            
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<index<<endl;
}