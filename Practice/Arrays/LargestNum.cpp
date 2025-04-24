#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr={4,3,1,6,5,7,2};
    int n=arr.size();
    int largest=INT_MIN;
    for(int ele:arr){
        if(ele>largest){
            largest=ele;
        }
    }
    cout<<"largest: "<<largest;
}