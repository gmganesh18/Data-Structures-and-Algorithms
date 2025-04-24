#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int priority(char s){
    if(s=='^'){
        return 3;
    }
    else if(s=='*' || s=='/')return 2;
    else if(s=='+' || s=='-')return 1;
    else return -1;
}
string infixToPrefix(string st,int n){
    reverse(st.begin(),st.end());
    for(int i=0;i<n;i++){
        if(st[i]=='(')st[i]=')';
        else if(st[i]==')')st[i]='(';
    }
    int i=0;
    string ans="";
    stack<char>s;
    while(i<n){
        if((st[i]>='A' && st[i]<='Z') || (st[i]>='a' && st[i]<='z') || (st[i]>='0' && st[i]<='9')){
            ans+=st[i];
        }
        else if(st[i]=='('){
            s.push(st[i]);
        }
        else if(st[i]==')'){
            while(!s.empty() && s.top()!='('){
                ans+=s.top();
                s.pop();
            }
            s.pop();
        }
        else{
            if(st[i]=='^'){
                while(!s.empty() && priority(st[i])<=priority(s.top())){
                    ans+=s.top();
                    s.pop();
                }
            }
            else{
                while(!s.empty() && priority(st[i])<priority(s.top())){
                    ans+=s.top();
                    s.pop();
                }
            }
            s.push(st[i]);
        }
        i++;
    }
    while(!s.empty()){
        ans+=s.top();
        s.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    string st="(A+B)*C-D+F";
    int n=st.length();
    string result= infixToPrefix(st,n);
    cout<<result<<endl;
    return 0;
}


// here in this code for ^ operator only its <=
// and for rest its <