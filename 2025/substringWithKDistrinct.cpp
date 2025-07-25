#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    string str;
    int k;
    cin>>str;
    cin>>k;
    vector<string>output;
    for(int i=0;i<str.length();i++){
        string temp="";
        unordered_map<char,int>map;
        for(int j=i;j<str.length();j++){
            temp+=str[j];
            map[str[j]]++;
            if(map.size()==k){
                output.push_back(temp);
            }
        }
    }
    for(string st:output){
        cout<<st<<" ";
    }
    // cout<<"The count is given by :"<<output.size()<<endl;
}