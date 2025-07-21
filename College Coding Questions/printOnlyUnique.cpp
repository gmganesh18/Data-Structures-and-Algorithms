#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void printUnique(vector<int>&input,vector<int>&result){
    int n=input.size();
    
}
int main(){
    vector<int>input={1,1,2,2,2,3,3,4,5};
    vector<int>result;
    printUnique(input,result);
    for(int ele:result)cout<<ele<<" ";
}