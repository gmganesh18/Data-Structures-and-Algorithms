#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<vector<int>>t;
void initialisation(int n,int m){
    t.assign(n+1,vector<int>(m+1));
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0 || j==0){
                t[i][j]=0;
            }
        }
    }
}
int LCS(string a,string b,int n,int m){
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(a[i-1]==b[j-1]){
                t[i][j]=1+t[i-1][j-1];
            }
            else{
                t[i][j]=0;
            }
        }
    }
    int counter=0;
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            counter=max(counter,t[i][j]);
        }
    }
    return counter;
}
int main(){
    string a="abtycdef";
    string b="abtydf";
    int n=a.length();
    int m=b.length();
    initialisation(n,m);
    int result=LCS(a,b,n,m);
    cout<<result<<endl;
}