#include<iostream>
#include<string>
using namespace std;
void solve(string out,int ones,int zeros,int N){
    if(N==0){
        cout<<out<<endl;
        return;
    }
    if(ones==zeros){
        string out1=out;
        out1+="1";
        ones++;
        N--;
        // solve(out1,ones+1,zeros,N-1);
        solve(out1,ones,zeros,N);
    }
    if(ones>zeros){
        string out1=out;
        string out2=out;
        out1+="1";
        out2+="0";
        solve(out1,ones+1,zeros,N-1);
        solve(out2,ones,zeros+1,N-1);
    }
}
int main(){
    int N=3;
    int ones=0;
    int zeros=0;
    string out="";
    solve(out,ones,zeros,N);
}