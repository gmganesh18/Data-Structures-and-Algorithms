#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string>inp = {"a","b","ab","abc","ads","ert"};
    string pattern="ads";
    for(int i=0;i<inp.size();i++){
        if(inp[i]==pattern){
            cout<<i;
        }
    }
}