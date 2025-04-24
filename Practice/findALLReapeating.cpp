#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
vector<int>FUNC(vector<int>&arr,int n){
    unordered_map<int,int>map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    vector<int>ans;
    for(auto ele:map){
        if(ele.second>1){
            int temp=ele.second;
            while(temp!=0){
                ans.push_back(ele.first);
                temp--;
            }
        }
    }
    return ans;
}
int main(){
    // vector<int>arr={2,1,3,4,2,2,3,4};
    vector<int>arr;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp; // Read each element
        arr.push_back(temp); // Add element to the vector
    }
    // int n=arr.size();
    vector<int>ans=FUNC(arr,n);
    for(int ele:ans){
        cout<<ele<<" ";
    }
}