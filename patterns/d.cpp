#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,8,5};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
}