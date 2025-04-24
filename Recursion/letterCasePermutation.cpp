#include<iostream>
#include<string>
using namespace std;
void solve(string inp,string out){
    if(inp.length()==0){
        cout<<out<<endl;
        return;
    }
    if(isalpha(inp[0])){
    string out1=out;
    string out2=out;
    out1+=tolower(inp[0]);
    out2+=toupper(inp[0]);
    inp.erase(inp.begin()+0);
    solve(inp,out1);
    solve(inp,out2);
    }
    else{
        string out1=out;
        out1+=inp[0];
        inp.erase(inp.begin()+0);
        solve(inp,out1);
    }
}
int main(){
    string inp="a1B2";
    string out="";
    solve(inp,out);
}