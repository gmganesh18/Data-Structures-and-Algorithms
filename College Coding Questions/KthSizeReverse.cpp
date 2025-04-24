#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
vector<int>Solve(vector<int>&input,int k){
    int n=input.size();
    vector<int>ans;
    int i=0;
    while(n-i>=k){
        vector<int>temp;
        for(int j=i+k-1;j>=i;j--){
            temp.push_back(input[j]);
        }
        for(int l=0;l<temp.size();l++){
            ans.push_back(temp[l]);
        }
        i+=k; 
    }
    while(i<n){
        ans.push_back(input[i]);
        i++;
    }
    return ans;
}
int main(){
    vector<int>input;
    string str;
    getline(cin,str);
    string word="";
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            word+=str[i];
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
    }
    int k;
    cin>>k;
    vector<int>ans=Solve(input,k);
    for(int ele:ans){
        cout<<ele<<" ";
    }
}