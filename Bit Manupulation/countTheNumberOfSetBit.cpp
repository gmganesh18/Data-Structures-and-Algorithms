#include<iostream>
#include<string>
using namespace std;
int CountSetOne(int n){
    int count=0;
    while(n>1){
        count+=n&1;
        n=n>>1;
    }
    if (n==1) count+=1;
    return count;
}
int main(){
    int n=13;
    int count=CountSetOne(n);
    cout<<count<<endl;
}