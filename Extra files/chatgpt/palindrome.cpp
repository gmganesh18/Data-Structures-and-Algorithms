#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isPalindrome(string str){
    int n=str.length();
    int left=0;
    int right=n-1;
    while(left<=right){
        if(str[left]!=str[right]){
            return false;
        }
        else{
            left++;
            right--;
        }
    }
    return true;
}
int main(){
    string str;
    cout<<"Enter the string :"<<endl;
    cin>>str;
    bool value=isPalindrome(str);
    cout<<value<<endl;
}