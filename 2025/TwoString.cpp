#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<set>
#include<climits>
using namespace std;
int main(){
    string str="abadcefabncc";
    // string str="adobecodebanc";
    string t="abc";
    unordered_map<char,int>map;
    for(int i=0;i<t.length();i++){
        map[t[i]]++;
    }
    
    vector<string>output;
    int mini=INT_MIN;
    string result="";
    for(int i=0;i<str.length();i++){
        string temp="";
        bool val=false;
        int count=0;
        set<string>st;
        for(int j=i;j<str.length();j++){
            temp+=str[j];
            if(map.find(str[j])!=map.end()){
                val=true;
                count++;
            }
            else{
                val=false;
            }
            st.insert(temp);
            if(count>=t.length() && st.size()>=map.size() && val==true){
                if(mini<j-i+1){
                    result=temp;
                    output.push_back(temp);
                }
                if(result!=""){
                    break;
                }
            }
        }
    }
    for(string st:output)cout<<st<<" ";
    // cout<<result;
}
