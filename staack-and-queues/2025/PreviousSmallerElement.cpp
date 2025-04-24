#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    vector<int>array={1,2,1,5};
    int n=array.size();
    vector<int>result(n);
    stack<int>st;
    for(int i=0;i<n;i++){
        if(st.empty()){
            result[i]=-1;
        }
        else if(!st.empty() && st.top()<array[i]){
            result[i]=st.top();
        }
        else if(!st.empty() && st.top()>=array[i]){
            while(!st.empty() && st.top()>=array[i]){
                st.pop();
            }
            if(st.empty()){
                result[i]=-1;
            }
            else{
                result[i]=st.top();
            }
        }
        st.push(array[i]);
    }
    for(int ele:result){
        cout<<ele<<" ";
    }
}