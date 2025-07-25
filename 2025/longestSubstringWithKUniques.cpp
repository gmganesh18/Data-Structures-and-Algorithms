#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<unordered_map>
using namespace std;
int main(){
    // string str="aabacbebebe";
    // int k=3;
    string str;
    int k;
    cin>>str;
    cin>>k;
    int n=str.length();
    if(str.length()<k)cout<<-1;
    vector<string>output;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        string temp="";
        unordered_map<char,int>map;
        for(int j=i;j<n;j++){
            temp+=str[j];
            map[str[j]]++;
            if(map.size()<=k){
                maxi=max(maxi,j-i+1);
            }
            if(map.size()>k){
                break;
            }
        }
    }
    if(maxi==INT_MIN)cout<<-1;
    cout<<maxi;
}