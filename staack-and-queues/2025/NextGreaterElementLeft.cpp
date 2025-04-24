// #include<iostream>
// #include<vector>
// #include<stack>
// #include<string>
// using namespace std;
// int main(){
//     vector<int>array={5,3,2,6};
//     // expected result=[-1,5,3,-1];
//     int n=array.size();
//     vector<int>result(n,-1);
//     for(int i=n-1;i>=0;i--){
//         for(int j=i-1;j>=0;j--){
//             if(array[j]>array[i]){
//                 result[i]=array[j];
//                 break;
//             }
//         }
//     }
//     for(int ele:result){
//         cout<<ele<<" ";
//     }
// }

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int>array={5,3,2,6};
    int n=array.size();
    vector<int>result(n);
    stack<int>st;
    for(int i=0;i<n;i++){
        if(st.empty() && i==0){
            result[i]=-1;
        }
        else if(!st.empty() && st.top()>array[i]){
            result[i]=st.top();
        }
        else if(!st.empty() && st.top()<=array[i]){
            while(!st.empty() && st.top()<=array[i]){
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