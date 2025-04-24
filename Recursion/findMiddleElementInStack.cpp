//delete the middle element in the stack by aditya verma


#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
void middle(stack<int>&st,int k){
    if(k==1){
        st.pop();
        return;
    }
    int temp=st.top();
    st.pop();
    middle(st,k-1);
    st.push(temp);
    return;
}

int main(){
    vector<int>arr={1,2,3,4,5};
    int k=3;
    int n=arr.size();
    stack<int>st;
    for(int ele:arr)st.push(ele);
    middle(st,k);
    vector<int>result;
    while(!st.empty()){
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(),result.end());
    for(int ele:result){
        cout<<ele<<" ";
    }
}