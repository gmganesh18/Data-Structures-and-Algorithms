// problem statement:
// a="geek"
// b="eke"
// output need to be like "geeke" because see g and e are differernt and g's next is e and its repeating so i took g first and then e and e are common i took only once like that

// e and e are same
// k and k are same
// so i wrote once

// the main goil is to find the shortest Common Supersequnce 
// and one more thing we can take any char from both strings but its need to be in sequnce means in order

// as ee and kk are same as we need to print it once 
// its Longest common subsequnce problem itself only

// we need to do m+n-LCS value
// we get proper result 4+3-2=5

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
    string a="geek";
    string b="eke";
    int n=a.length();
    int m=b.length();
    initialisation(n,m);
    cout<<n+m-LCS(a,b,n,m);
}



// its easy only 