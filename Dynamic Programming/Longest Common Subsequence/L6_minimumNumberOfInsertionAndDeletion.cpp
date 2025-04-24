// given two strings 

// a="heap"
// b="pea"

// we need to form a string as b string

// means a to look like b
// we are allowed to do insertion and deletion 
// we need to return minimum number in that

// as a="heap"   b="pea"

// h is deleted in a
// delete h and p from a
// and insert p from b

#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<vector<int>>t;
void initialisation(int n,int m){
    t.assign(n+1,vector<int>(m+1));
    for(int i=0;i<n;i++){
        for(int j=0;j<0;j++){
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
                t[i][j]=max(t[i][j-1],t[i-1][j]);
            }
        }
    }
    return t[n][m];
}
int main(){
    string a="heap";
    string b="pea";
    int n=a.length();
    int m=b.length();
    initialisation(n,m);
    int val=LCS(a,b,n,m);
    int deletion=n-val;
    int insertion=m-val;
    cout<<"insertion :"<<insertion<<endl;
    cout<<"deletion :"<<deletion;
}

