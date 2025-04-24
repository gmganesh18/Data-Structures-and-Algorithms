// inp="ABC" 
// out={
//     "A_BC",
//     "A_B_C",..........here _ is space
//     "Ab_C",
//     "ABC"
// }

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void solve(string inp,string out){
    if(inp.length()==0){
        cout<<out<<endl;
        return;
    }
    string out1=out;
    string out2=out;
    // string space=" ";
    out1+='_';
    out1+=inp[0];
    out2 +=inp[0];
    inp.erase(inp.begin()+0);
    solve(inp,out1);
    solve(inp,out2);
}
int main(){
    string inp="ABC";
    string out="";
    out +=inp[0];
    inp.erase(inp.begin()+0);
    solve(inp,out);
}