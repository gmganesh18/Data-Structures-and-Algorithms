#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int hash[256];
    fill(hash,hash+256,-1);
    string str="cadbzabcd";
    int left=0;
    int right=0;
    int maxLen=0;
    // string temp="";
    while(right<str.length()){
        // temp+=str[right];
        if(hash[str[right]]!=-1){
            if(hash[str[right]]>=left){
                left=hash[str[right]]+1;
            }
        }
        maxLen=max(maxLen,right-left+1);
        hash[str[right]]=right;
        right++;
    }
    cout<<maxLen;

}
