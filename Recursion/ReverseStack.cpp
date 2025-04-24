#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void reverseStack(stack<int>&st){
    if(st.size()==0){
        return;
    }
    int temp=st.top();
    st.pop();
    reverseStack(st);
    st.push(temp);
    return;
}
int main(){
    vector<int>arr={5,4,3,2,1};
    stack<int>st;
    for(int ele:arr){
        st.push(ele);
    }
    reverseStack(st);
    while(!st.empty()){
        cout<<st.top()<< " ";
        st.pop();
    }
}