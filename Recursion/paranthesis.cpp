#include<iostream>
#include<string>
using namespace std;
void solve(int open,int close,string out){
    if(open==0 && close==0){
        cout<<out<<endl;
        return;
    }
    if(open!=0){
        string out1=out;
        out1+="(";
        solve(open-1,close,out1);
    }
    if(close>open){
        string out1=out;
        out1+=")";
        solve(open,close-1,out1);
    }
}
int main(){
    int n=3;
    string out="";
    int open=n;
    int close=n;
    solve(open,close,out);
}