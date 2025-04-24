#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;
vector<int>Func(vector<int>&input){
    vector<int>ans;
    unordered_map<int,int>map;
    for(int i=0;i<input.size();i++){
        map[input[i]]++;
    }
    for(auto ele:map){
        if(ele.second==1){
            ans.push_back(ele.first);
        }
    }
    return ans;
}
int main(){
    vector<int>input;
    string inp;
    cin>>inp;
    for(int i=0;i<inp.length();i++){
        if(isdigit(inp[i])){    
            input.push_back(inp[i]-'0');
        } 
    }
    //[1,1,6,8,2,2,3,4,5]
    
    vector<int>ans=Func(input);
    for(int ele:ans){
        cout<<ele<<",";
    }
    
}