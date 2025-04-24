#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>nums;
    string str;
    string word="";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            word+=str[i];
        }
        else if(!word.empty()){
            nums.push_back(stoi(word));
            word="";
        }
    }
    if (!word.empty()) { 
        nums.push_back(stoi(word)); // Store the last number
    }
    
    for(int ele:nums){
        cout<<ele<<" ";
    }
}