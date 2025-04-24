#include<iostream>
#include<vector>
#include<string>
#include<set>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<int>nums;
    string word="";
    for(char ch:str){
        if(ch==','){
            if(!word.empty()){
                nums.push_back(stoi(word));
                word="";
            }
            
        }
        else{
            word+=ch;
        }
    }
    if(!word.empty()){
        nums.push_back(stoi(word));
    }
    set<int>st;
    for(int ele:nums){
        st.insert(ele);
    }
    vector<int>result(st.begin(),st.end());
    cout<<"[";
    for(int i=0;i<result.size();i++){
        if(i==0){
            cout<<result[i];
            cout<<",";
        }
        else if(i>0 && i<result.size()-1){
            cout<<" ";
            cout<<result[i];
            cout<<",";
        }
        else if(i==result.size()-1){
            cout<<" ";
            cout<<result[i];
            cout<<"]";
        }
        
    }
}