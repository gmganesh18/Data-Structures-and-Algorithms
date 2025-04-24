#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_set>
using namespace std;
void permute(string &str,string output,vector<string>&result){
    if(str.size()==0){
        result.push_back(output);
        return;
    }
    unordered_set<char>set;
    for(int i=0;i<str.length();i++){
        if(set.find(str[i])==set.end()){
            set.insert(str[i]);
            string inp=str.substr(0,i)+str.substr(i+1);
            permute(inp,output+str[i],result);
        }    
    }
}
vector<string>permutation(string &str){
    string output="";
    vector<string>result;
    permute(str,output,result);
    return result;
}
int main(){
    string str="abc";
    vector<string>result=permutation(str);
    for(string ele:result){
        cout<<ele<<" ";
    }
}



// set is used to store only unique permutation .....
// its aditya vermas logic

//this is complete recursion approach
//we can use backtracking appraoch for this code for better optimisation