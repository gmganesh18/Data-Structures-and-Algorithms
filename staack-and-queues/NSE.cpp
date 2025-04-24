// next smaller elements
#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={5,7,2,6};
    int n=sizeof(arr)/sizeof(int);
    int nse[n];
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            nse[i]=-1;
        }
        else nse[i]=st.top();
        st.push(arr[i]);
    }
    for(int ele:nse)cout<<ele<<" ";
}

// check dairy dolo 650 date 04 april