#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr={4,3,1,6,5,7,2};
    int n=arr.size();
    int minimum=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<minimum){
            minimum=arr[i];
        }
    }
    cout<<minimum<<endl;
}