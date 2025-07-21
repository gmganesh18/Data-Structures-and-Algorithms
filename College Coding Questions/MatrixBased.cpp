#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    // 1 2 3
    // 4 5 6
    // 7 8 9
    int first=0;
    int i=0,j=0;
    while(i<n && i>-1 && j>-1 && j<n){
        first+=matrix[i][j];
        
        i++;
        j++;
    }
    int second=0;
    i=0,j=n-1;
    while(i<n && i>-1 && j>-1 && j<n){
        second+=matrix[i][j];
        i++;
        j--;
    }
    cout<<abs(first-second);
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}