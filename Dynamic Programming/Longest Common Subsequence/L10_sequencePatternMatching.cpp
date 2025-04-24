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
                t[i][j]=max(t[i][j-1],t[i-1][j]);
            }
        }
    }
    return t[n][m];
}
int main(){
    string str1="AXY";
    string str2="ADXCPY";
    int n=str1.length();
    int m=str2.length();
    initialisation(n,m);
    int val=LCS(str1,str2,n,m);
    if(n==val){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}



str1=""
str2=""

we need to check wheather str1 in str2 i mean in sequnce (in order);
if its there means cout true

logic is if we do LCS of both means we get the value which is equal to length of str1 becasue as its lcs it must need to be present in both so 

understanding right


