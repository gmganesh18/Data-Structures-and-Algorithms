#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void printAllPaths(int i,int j,int n,int m,vector<vector<int>>&input,string path,vector<string>&output){
    if(i==n-1 && j==m-1){
        output.push_back(path);
        return;
    }
    if(j+1<m){
        string newPath=path+to_string(input[i][j+1])+"->";
        printAllPaths(i,j+1,n,m,input,newPath,output);
    }
    if(i+1<n){
        string newPath=path+to_string(input[i+1][j]);
        newPath+="->";
        printAllPaths(i+1,j,n,m,input,newPath,output);
    }
    return;
}
int main(){
    vector<vector<int>>input={{1,2,3},{4,5,6}};
    int n=input.size();
    int m=input[0].size();
    vector<string>output;
    string path="1->";
    printAllPaths(0,0,n,m,input,path,output);
    for(string st:output){
        if(st.size()>=2)st=st.substr(0,st.length()-2);
        cout<<st<<" ";
    }
}



//newPath to avoid confict