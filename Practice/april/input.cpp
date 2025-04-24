#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string>st;
    string str;
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,str);
        st.push_back(str);
    }
    for(string strr:st){
        cout<<strr<<" ";
    }
}