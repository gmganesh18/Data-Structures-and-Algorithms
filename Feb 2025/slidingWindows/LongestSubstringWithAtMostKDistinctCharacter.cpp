// s="aaabbccd" k=2
// we neeed to consider at most two charector with longest substring like example 
// aaabb
// bbcc
// ccd
#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
using namespace std;
int LongestSubstringBrute(string str,int k,int n){
    int maxlen=0;
    for(int i=0;i<n;i++){
        set<char>st;
        for(int j=i;j<n;j++){
            st.insert(str[j]);
            if(st.size()<=k){
                maxlen=max(maxlen,j-i+1);
            }
            else{
                break;
            }
        }
    }
    return maxlen;
}
int LongestSubstringBetter(string str,int k,int n){
    int left=0;
    int right=0;
    int maxLen=0;
    unordered_map<char,int>map;
    while(right<n){
        map[str[right]]++;
        if(map.size()>k){
            while(map.size()>k){
                map[str[left]]--;
                if(map[str[left]]==0){
                    map.erase(str[left]);
                }
                left++;
            }
        }
        if(map.size()<=k){
            maxLen=max(maxLen,right-left+1);
        }
        right++;
    }
    return maxLen;
}
int LongestSubstringBest(string str,int k,int n){
    int left=0;
    int right=0;
    int maxLen=0;
    unordered_map<char,int>map;
    while(right<n){
        map[str[right]]++;
        if(map.size()>k){
            map[str[left]]--;
            if(map[str[left]]==0){
                map.erase(str[left]);
            }
            left++;
        }
        if(map.size()<=k){
            maxLen=max(maxLen,right-left+1);
        }
        right++;
    }
    return maxLen;
}

int main(){
    string str="aaabbccd";
    int k=2;
    int n=str.length();
    // int maxLen=LongestSubstringBrute(str,k,n);
    // int maxLen=LongestSubstringBetter(str,k,n);
    int maxLen=LongestSubstringBest(str,k,n);
    cout<<maxLen;
}