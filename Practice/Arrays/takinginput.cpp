#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>input;
    string temp;
    int store=n;
    while(store>0){
        cin>>temp;
        input.push_back(temp);
        store--;
    }
    for(int i=0;i<input.size();++i){
        cout<<input[i];
        if(i!=input.size()-1){
            cout<<",";
        }
    }
}