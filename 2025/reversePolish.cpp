#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
int main(){
    vector<char>input={'2','1','+','3','*'};
    int n=input.size();
    stack<int>st;
    for(int i=0;i<n;i++){
        if(input[i]!='-' && input[i]!='*' && input[i]!='/' && input[i]!='+'){
            st.push(input[i]-'0');
        }
        else{
            if(st.size()>=2){
                int d2=st.top();
                st.pop();
                int d1=st.top();
                st.pop();
                int temp;
                if(input[i]=='+')temp=d1+d2;
                else if(input[i]=='-')temp=d1-d2;
                else if(input[i]=='*')temp=d1*d2;
                else temp=d1/d2;
                st.push(temp);
            }
        }
    }
    cout<<st.top();
}