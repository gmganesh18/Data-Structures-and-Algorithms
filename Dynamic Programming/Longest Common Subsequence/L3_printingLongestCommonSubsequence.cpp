#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
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
void LCS(string a,string b,int n,int m){
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(a[i-1]==b[j-1]){
                t[i][j]=1+t[i-1][j-1];
            }
            else{
                t[i][j]=max(t[i][j-1],t[i-1][j]);
            }
        }
    }
}
string printingLCSChars(string a,string b,int n,int m){
    string ans="";
    int i=n;
    int j=m;
    while(i>0 && j>0){
        if(a[i-1]==b[j-1]){
            ans+=a[i-1];
            i--;
            j--;
        }
        else{
            if(t[i][j-1]>t[i-1][j]){
                j--;
            }
            else{
                i--;
            }
        }
    }
    return ans;
}
int main(){
    string a="abcdgh";
    string b="aedfhr";
    int n=a.length();
    int m=b.length();
    initialisation(n,m);
    LCS(a,b,n,m);
    string result=printingLCSChars(a,b,n,m);
    reverse(result.begin(),result.end());
    cout<<result;
}