#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<int>printSum(vector<int>&nums1,vector<int>&nums2){
    vector<int>result;
    int n=nums1.size();
    int m=nums2.size();
    int i=0;
    int j=0;
    while(i<n && j<m){
        result.push_back(nums1[i++]+nums2[j++]);
    }
    while(i<n){
        result.push_back(nums1[i++]);
    }
    while(j<m){
        result.push_back(nums2[j++]);
    }
    return result;
}
int main(){
    string str;
    string str2;
    getline(cin,str);
    getline(cin,str2);
    string word="";
    vector<int>input;
    for(char st:str){
        if(st!=' '){
            word+=st;
        }
        else{
            if(!word.empty()){
                input.push_back(stoi(word));
                word="";
            }
        }
    }
    if(!word.empty()){
        input.push_back(stoi(word));
        word="";
    }

    string word1="";
    vector<int>input1;
    for(char st:str2){
        if(st!=' '){
            word1+=st;
        }
        else{
            if(!word1.empty()){
                input1.push_back(stoi(word1));
                word1="";
            }
        }
    }
    if(!word1.empty()){
        input1.push_back(stoi(word1));
        word1="";
    }

    vector<int>result=printSum(input,input1);
    for(int ele:result)cout<<ele<<" ";
}