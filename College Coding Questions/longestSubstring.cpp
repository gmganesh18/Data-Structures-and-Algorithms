#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;
bool isBalanced(unordered_map<char,int>&freq){
    int count=0;
    for(auto& p:freq){
        if(count==0){
            count=p.second;
        }
        else if(count!=p.second){
            return false;
        }
    }
    return true;
}
int main(){
    string str="aabbccdd";
    int maxLen=0;
    for(int i=0;i<str.length();i++){
        unordered_map<char,int>freq;
        for(int j=i;j<str.length();j++){
            freq[str[j]]++;
            if(isBalanced(freq)){
                maxLen=max(maxLen,j-i+1);
            }
        }
    }
    cout<<maxLen;
}