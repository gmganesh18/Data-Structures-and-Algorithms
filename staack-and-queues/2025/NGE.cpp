#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={1,3,2,5};
    int n=nums.size();
    vector<int>result(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        if(st.size()==0){
            result[i]=-1;
        }
        else if(st.size()>0 && nums[i]<st.top()){
            result[i]=st.top();
        }
        else{
            while(st.size()>0 && st.top()<nums[i]){
                st.pop();
            }
            if(st.size()==0){
                result[i]=-1;
            }
            else{
                result[i]=st.top();
            }  
        }
        st.push(nums[i]);
    }
    for(int ele:result){
        cout<<ele<<" ";
    }
}