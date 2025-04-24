#include<iostream>
#include<stack>
using namespace std;
bool validParanthesis(string s){
    stack<int>st;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.size()==0){
                return false;
            }
            char top=st.top();
            if((s[i]=='(' && top==')') || (s[i]=='[' && top==']')){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    return st.empty();
    
}
int main(){
    string s="([])";
    validParanthesis(s);
}