#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr={4,3,1,6,5,7,2};
    int n=arr.size();
    int Smallest=INT_MAX;
    int SecondSmallest=INT_MAX;
    for(int ele:arr){
        if(ele<Smallest){
            SecondSmallest=Smallest;
            Smallest=ele;
        }

    }
}