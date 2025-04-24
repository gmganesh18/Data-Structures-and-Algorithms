#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
void permute(vector<int>&input,int start,vector<vector<int>>&result){
    if(start==input.size()-1){
        result.push_back(input);
        return;
    }
    for(int i=start;i<input.size();i++){
        swap(input[start],input[i]);
        permute(input,start+1,result);
        swap(input[start],input[i]);
    }
}
int main(){
    vector<int>input={1,2,3};
    vector<vector<int>>result;
    permute(input,0,result);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<input.size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}