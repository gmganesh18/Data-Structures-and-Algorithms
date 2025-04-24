#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>array={0,0,0,0,0,0,0,1,1,1,1,1};
    // expectedOutput=7 ,index
    int start=0;
    int end=1;
    while(array[end]==0){
        start=end;
        end=2*end;
    }
    int index=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(array[mid]==1){
            index=mid;
            end=mid-1;
        }
        else if(array[mid]==0){
            start=mid+1;
        }

    }
    cout<<index<<endl;
}