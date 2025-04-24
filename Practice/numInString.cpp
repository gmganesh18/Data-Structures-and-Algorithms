#include<iostream>
#include<vector>
#include<vector>
#include<algorithm>
using namespace std;
void printNUM(string s,int len){
    vector<int>ans;
        for(char ele:s){
            string str="";
            if(isdigit(ele)){
                for(char elee:ele){
                    str+=elee;
                }
            }
            ans.push_back(stoi(str));
        }
    for(int ele:ans){
        cout<<ele<<",";
    }
}

int main(){
    string str="1 box has 3 blue 4 red 6 green and 12 yellow marbles";
    int len=str.length();
    printNUM(str,len);
}