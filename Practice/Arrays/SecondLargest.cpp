#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr={4,3,1,6,5,7,2};
    int n=arr.size();
    int largest=INT_MIN;
    // int SLargest=0;
    // for(int ele:arr){
    //     if(ele>largest){
    //         largest=ele;
    //     }
    // }
    // for(int ele:arr){
    //     if(ele<largest){
    //         SLargest=max(SLargest,ele);
    //     }
    // }
    // cout<<"Second Largest"<<SLargest;
    int SecondLargest=INT_MIN;
    for(int ele:arr){
        if(ele>largest){
            SecondLargest=largest;
            largest=ele;
        }
        else if(ele<largest && ele>SecondLargest){
            SecondLargest=ele;
        }
    }
    cout<<"Second Largest"<<SecondLargest;
}