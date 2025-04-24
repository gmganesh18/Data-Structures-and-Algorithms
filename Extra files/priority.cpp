#include<iostream>
using namespace std;
int priority(char s){
    if(s=='^'){
        return 3;
    }
    else if(s=='*' || s=='/')return 2;
    else if(s=='+' || s=='-')return 1;
    else return -1;
}
int main(){
    char s;
    cin>>s;
    cout<<priority(s);
}