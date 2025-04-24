#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    unordered_map<int,int>map;
    vector<int>arr={2,1,3,2,3};
    for(int i=0;i<arr.size();i++){
        map[arr[i]]++;
    }
    for(auto it:map){
        if(it.first==1){
            cout<<it.second;
        }
    }
    vector<int>arr={3,2,1,1,2};
    int xor1=0;
    for(int it:arr){
        xor1=xor1^it;
    }
    cout<<xor1;
}