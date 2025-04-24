#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string result="";
    while(n>0){
        if(n%2==1)result+="1";
        else result+="0";
        n=n/2;
    }
    reverse(result.begin(),result.end());
    cout<<result<<endl;
}