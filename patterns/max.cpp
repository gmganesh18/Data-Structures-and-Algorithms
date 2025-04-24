#include<iostream>
#include<algorithm>
#include <climits>
using namespace std;
int main(){
    int arr[]={1,5,9,2,11,8};
    int n=sizeof(arr)/sizeof(int);
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
    }
    cout<<mini;
}
