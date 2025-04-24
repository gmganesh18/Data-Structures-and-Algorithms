// Palindrome Partitioning Recursion

//one string given nitin
// we need to find minimum number of partiton that we can do in that string such that that sub string need to be an palindrome
//like 2 partion
// n | iti | n -> there are total 2 "|"

//its MCM based 
// i starts from i because as no need of prev elements as MCM soo
// k starts from i 
// for j as last index

//for better understanding dry run for k


//this below is recursive code
// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// #include<climits>
// using namespace std;
// bool isPalindrome(string str, int start, int end) {
//     while (start < end) {
//         if (str[start] != str[end]) {
//             return false;
//         }
//         start++;
//         end--;
//     }
//     return true;
// }


// int Solve(string str,int i,int j){
//     if(i>=j){
//         return 0;
//     }
//     if(isPalindrome(str,i,j)){
//         return 0;
//     }
//     int min=INT_MAX;
//     for(int k=i;k<=j-1;k++){
//         int temp=Solve(str,i,k)+Solve(str,k+1,j)+1;
//         if(temp<min){
//             min=temp;
//         }
//     }
//     return min;
    
// }
// int main(){
//     string str="nitin";
//     int n=str.length();
//     int minimum=Solve(str,0,n-1);
//     cout<<minimum;
// }



//This is botton up appraoch using dp table
// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// #include<climits>
// using namespace std;
// vector<vector<int>>t;
// void initialisation(int n,int m){
//     t.assign(n+1,vector<int>(m+1,-1));
// }
// bool isPalindrome(string str, int start, int end) {
//     while (start < end) {
//         if (str[start] != str[end]) {
//             return false;
//         }
//         start++;
//         end--;
//     }
//     return true;
// }
// int Solve(string str,int i,int j){
//     if(i>=j){
//         return 0;
//     }
//     if(isPalindrome(str,i,j)){
//         return 0;
//     }
//     if(t[i][j]!=-1){
//         return t[i][j];
//     }
//     int min=INT_MAX;
//     for(int k=i;k<=j-1;k++){
//         int temp=Solve(str,i,k)+Solve(str,k+1,j)+1;
//         if(temp<min){
//             min=temp;
//         }
//     }
//     return t[i][j]=min;
    
// }
// int main(){
//     string str="nitin";
//     int n=str.length();
//     initialisation(n,n);
//     int minimum=Solve(str,0,n-1);
//     cout<<minimum;
// }



//still we can optimise this above code by
// as we can see we are using table to check complete two part values in table
// apart from that we even can do check for single part from the table

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
vector<vector<int>>t;
void initialisation(int n,int m){
    t.assign(n+1,vector<int>(m+1,-1));
}
bool isPalindrome(string str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int Solve(string str,int i,int j){
    if(i>=j){
        return 0;
    }
    if(isPalindrome(str,i,j)){
        return 0;
    }
    if(t[i][j]!=-1){
        return t[i][j];
    }
    int min=INT_MAX;
    for(int k=i;k<=j-1;k++){
        int left,right;
        // int temp=Solve(str,i,k)+Solve(str,k+1,j)+1;
        if(t[i][k]!=-1){
            left=t[i][k];
        }
        else{
            left=Solve(str,i,k);
            t[i][k]=left;
        }
        if(t[k+1][j]!=-1){
            right=t[k+1][j];
        }
        else{
            right=Solve(str,k+1,j);
            t[k+1][j]=right;
        }
        int temp=1+left+right;
        if(temp<min){
            min=temp;
        }
    }
    return t[i][j]=min;
    
}
int main(){
    string str="nitin";
    int n=str.length();
    initialisation(n,n);
    int minimum=Solve(str,0,n-1);
    cout<<minimum;
}