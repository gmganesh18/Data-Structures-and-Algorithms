#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<string>str={"eat","tea","tan","ate","nat","bat"};
    for(string &s:str){
        sort(s.begin(),s.end());
    }
    for(string s:str){
        cout<<s<<" ";
    }
}