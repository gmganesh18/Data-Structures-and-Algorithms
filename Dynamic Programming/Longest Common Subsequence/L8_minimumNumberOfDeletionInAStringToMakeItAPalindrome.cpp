// minimum number of deletion in a string to make it a palindrome

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
            if(a[i-1]==b[j-1]){
                t[i][j]=1+t[i-1][j-1];
            }
            else{
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    return t[n][m];
}
int main(){
    string str="aebcbda";
    string str2=str;
    reverse(str2.begin(),str2.end());
    int n=str.length();
    int m=str2.length();
    initialisation(n,m);
    cout<<n-LCS(str,str2,n,m)<<endl;
}



// the question is like one string will be given we need to delete some chars in such a way that the string becomes palindrome with minimum deletion 

// the logic is 
// minimum deletion =1/bigg string

// means if string size is very less means deletion will be more 

// so if do one more string str2 with reverse of str 

// then if we do LCS of both means we get 5 

// then by n-LCS() means we get no of deletion

