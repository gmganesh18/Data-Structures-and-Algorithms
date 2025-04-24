#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<int>input1={2,4,3,8,9};
    vector<int>input2={5,6,4};
    vector<int>ans;
    int n=input1.size();
    int m=input2.size();
    int i=0;
    int j=0;
    while(i<n && j<m){
        ans.push_back(input1[i]+input2[j]);
        i++;
        j++;
    }
    while(i<n){
        ans.push_back(input1[i]);
        i++;
    }
    while(j<m){
        ans.push_back(input2[j]);
        j++;
    }
    for(int ele:ans){
        cout<<ele<<" ";
    }
}