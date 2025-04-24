#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>CreateASortedArray(vector<int>&list1,vector<int>&list2){
    vector<int>result;
    int n=list1.size();
    int i=0;
    int j=0;
    while(i<n || j<n){
        if(list1[i]<=list2[j]){
            result.push_back(list1[i]);
            i++;
        }
        else{
            result.push_back(list2[j]);
            j++;
        }
    }
    while(i<n){
        result.push_back(list1[i]);
        i++;
    }
    while(j<n){
        result.push_back(list1[j]);
        j++;
    }
    return result;
}
int main(){
    vector<int>list1={1,3,4,6,9};
    vector<int>list2={2,5,7,8,10};
    vector<int>result=CreateASortedArray(list1,list2);
    for(int ele:result){
        cout<<ele<<" ";
    }
}