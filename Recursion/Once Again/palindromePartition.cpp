#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
bool isPalindrome(string s,int start,int end){
    while(start<=end){
        if(s[start]!=s[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}
void Partitioning(string &s,int index,vector<string>&ds,vector<vector<string>>&ans){
    if(index==s.length()){
        ans.push_back(ds);
        return;
    }
    for(int i=index;i<s.length();i++){
        if(isPalindrome(s,index,i)){
            ds.push_back(s.substr(index,i-index+1));
            Partitioning(s,i+1,ds,ans);
            ds.pop_back();
        }
    }
}
int main(){
    string s="aabb";
    vector<vector<string>>ans;
    vector<string>ds;
    Partitioning(s,0,ds,ans);
    for(const auto& partition:ans){
        for(const auto& str: partition){
            cout<<str<<" ";
        }
        cout<<endl;
    }
}