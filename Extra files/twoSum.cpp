#include<iostream>
#include<vector>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
string twoSum(vector<int>&arr,int n,int target){
    sort(arr.begin(),arr.end());
    int left=0;
    int right=n-1;
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            return "YES";
        }
        else if(sum>target){
            right--;
        }
        else{
            left++;
        }
    }
    return "NO";
}
    

int main(){

    // int n;
    // cin>>n;
    // int target;
    // cin>>target;
    // cin.ignore();

    // string line;
    // getline(cin,line);

    // vector<int>arr;
    // stringstream ss(line);
    // string temp;
    // while(getline(ss,temp,',')){
    //     arr.push_back(stoi(temp));
    // }
    int n;
    cin>>n;
    int target;
    cin>>target;
    cin.ignore();
    string line;
    getline(cin,line);

    vector<int>arr;
    stringstream ss(line);
    string temp;

    while(getline(ss,temp,',')){
        arr.push_back(stoi(temp));
    }
    string result=twoSum(arr,n,target);
    cout<<result;
}


