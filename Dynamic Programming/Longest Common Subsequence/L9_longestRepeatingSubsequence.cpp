// str="AABEBCDD";
// we need to find the longest repeating subsequence
// means we need to make one subsequence which are repeating 
// like 
// ABD
// ABD
// AB
// one thing is if one time that indexed element is selected means we should select different indexed element in next sequence


// logic is take copy of same str2 one more time 
// to compute lcs
// but with one more condition i!=j

// because i==j will not be selected different indexed will be selected

//the main thing is we are not looking for unique non repeating char ,we are looking for unique index chars


#include<iostream>
#include<vector>
#include<string>
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
int LCS(string a,string b,int n,int m){
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(a[i-1]==b[j-1] && i!=j){
                t[i][j]=1+t[i-1][j-1];
            }
            else{
                t[i][j]=max(t[i][j-1],t[i-1][j]);
            }
        }
    }
    return t[n][m];
}
int main(){
    string str="AABEBCDDD";
    int n=str.length();
    string str1=str;
    int m=str1.length();
    initialisation(n,m);
    cout<<LCS(str,str1,n,m);
}