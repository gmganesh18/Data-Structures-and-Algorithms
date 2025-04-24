#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str="Ganesh";
    int n=str.length();
    // reverse(str.begin(),str.end());
    int left=0;
    int right=n-1;
    while(left<right){
        swap(str[left],str[right]);
        left++;
        right--;
    }
    cout<<str;
}