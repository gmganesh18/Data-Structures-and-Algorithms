#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,2,3,2,4};
    int n=sizeof(arr)/sizeof(int);
    int sum1=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[i]==arr[j]){
                sum1+=arr[i];
                sum1+=arr[j];
            }
            else{
                continue;
            }
        }
    }
    cout<<sum1<<endl;
}