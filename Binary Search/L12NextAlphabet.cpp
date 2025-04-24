#include<iostream>
#include<string>
#include<vector>
using namespace std;
char NextChar(vector<char>&str,int n,char target){
    int start=0;
    int end=n-1;
    char result='\0';
    while(start<=end){
        int mid=start+(end-start)/2;
        if(target<str[mid]){
            result= str[mid];
            end=end-1;
        }
        else{
            start=mid+1;
        }
    }
    return result;
}
int main(){
    vector<char> str = {'a', 'b', 'e', 'g', 'i'};
    int n=str.size();
    char target='e';
    char nextChar=NextChar(str,n,target);
    cout<<nextChar<<endl;
}