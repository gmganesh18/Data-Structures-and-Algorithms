#include<iostream>
#include<vector>
using namespace std;
void combination(int index,int target,vector<int>&ds,vector<int>&input,vector<vector<int>>&ans){
    if(index==input.size()){
        if(target==0){
            ans.push_back(ds);
            return;
        }  
    }
    ds.push_back(input[index]);
    combination(index,target-input[index],ds,input,ans);
    ds.pop_back();
    combination(index+1,target,ds,input,ans);
    return;
}
int main(){
    vector<int>input={2,3,6,7};
    int target=7;
    vector<int>ds;
    vector<vector<int>>ans;
    combination(0,target,ds,input,ans);
    

}