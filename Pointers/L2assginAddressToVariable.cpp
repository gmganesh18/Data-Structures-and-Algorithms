#include<iostream>
using namespace std;
int main(){
    int a=10;
    cout<<&a<<endl;
    int* ptr=&a;
    cout<<ptr<<endl;
}


//if took varible as int means pointer variable also need to be int only
// if u took float means pointer varible should be float only