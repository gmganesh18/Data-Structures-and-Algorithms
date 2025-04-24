#include<iostream>
using namespace std;
void print(int n,int fact){
    // int fact=1;
    if(n==1){
        fact*=n;
        cout<<fact<<endl;
        return;
    }
    print(n-1,fact*n);
    fact*=n;
    cout<<fact<<endl;
}
int main(){
    int n=4;
    int fact=1;
    print(n,fact);
}