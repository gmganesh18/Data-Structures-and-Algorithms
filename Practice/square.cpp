#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int n=19;
    string s="";
    s+=to_string(n);
    while(s!="1"){
        string temp="";
        for(char ele:s){
            int digit=ele-'0';
            temp+=to_string(digit*digit);
        }
        s=temp;
    }
}