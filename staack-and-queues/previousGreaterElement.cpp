#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={7,5,8,2};
    int n=sizeof(arr)/sizeof(int);
    int pge[n];
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        st.empty() ? pge[i]=-1 : pge[i]=st.top();
        st.push(arr[i]);
    }
    for(int ele:pge)cout<<ele<<" ";
}