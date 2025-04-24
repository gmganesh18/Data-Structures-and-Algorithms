// question 
// array=[1,2,3,4,5,6,7,8,9,10,11,12,..............infite]

// we need to find the element in that array

// as we can find the element by using bs in efficient way . But the problem in this statement is we can get starting index but unable to find the ending index as its an infinite array

// as the plan is

// take array[0] as start
// and array[1] as end first
// then 

// traverse the array using while until we find largest element than target 
// we need to multiply end in each step and
// keep start in end place in each step

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>array={1,2,3,4,5,6,7,8,9,10,11,12};
    int target=8;
    // expected answer=7    
    int start=0;
    int end=1;
    while(target>array[end]){
        start=end;
        end=end*2;
    }
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(array[mid]==target){
            cout<<mid;
            break;
        } 
        else if(array[mid]>target)end=mid-1;
        else start=mid+1;
    }



}