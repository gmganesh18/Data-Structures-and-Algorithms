#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int>stockSpan(vector<int>&array,int n){
    stack<pair<int,int>>st;
    vector<int>result(n);
    for(int i=0;i<n;i++){
        if(st.empty()){
            result[i]=-1;
        }
        else if(!st.empty() && st.top().first>array[i]){
            result[i]=st.top().second;
        }
        else if(!st.empty() && st.top().first<=array[i]){
            while(!st.empty() && st.top().first<=array[i]){
                st.pop();
            }
            if(st.empty()){
                result[i]=-1;
            }
            else{
                result[i]=st.top().second;
            }
        }
        st.push({array[i],i});
    }
    for(int i=0;i<n;i++){
        result[i]=i-result[i];
    }
    return result;
}
int main(){
    vector<int>array={100,80,60,70,60,75,85};//[1,1,1,2,1,4,6]output
    int n=array.size();
    vector<int>result=stockSpan(array,n);
    for(int ele:result){
        cout<<ele<<" ";
    }
}