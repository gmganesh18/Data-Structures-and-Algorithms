#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,1,2,2,2,3,3,4,4,4};
    int n=sizeof(arr)/sizeof(int);
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                
            }
        }
        cout<<count<<endl;
    }
}