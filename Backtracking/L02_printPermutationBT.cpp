#include<iostream>
#include<vector>
#include<unordered_set>
#include<string>
using namespace std;
void permute(string &str,int start,vector<string>&result){
    if(start==str.length()-1){//if start reaches end then we can store the str in vector......
        result.push_back(str);
        return;//return is used to return or to get exit
    }
    unordered_set<char>set;//this is used to track of char which is already veiwed....
    for(int i=start;i<str.length();i++){//i=start is must because to swap it once(dry run u will understand)
        if(set.find(str[i])==set.end()){//if this reaches end means its new char.....
            set.insert(str[i]);
            swap(str[start],str[i]);
            permute(str,start+1,result);//start+1 is used to move to next char
            swap(str[start],str[i]);//this is used to revert what we have did before
        } 
    }
}
int main(){
    string str="abc";
    // string str="aab";this is to check for dublicate cases
    vector<string>result;
    permute(str,0,result);
    for(string st:result){
        cout<<st<<" ";
    }
}