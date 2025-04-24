// next Greater Element
#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={6,0,8,4,5};
    int n=sizeof(arr)/sizeof(int);
    int nge[n];
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            nge[i]=-1;
        }
        else{
            nge[i]=st.top();
        }
        st.push(arr[i]);
    }
    for(int ch:nge){
            cout<<ch<<" ";
    }
}
