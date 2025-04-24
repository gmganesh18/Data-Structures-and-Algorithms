// Deference operator meaning 
// giving tha value stored in the specified address
// *(&something)
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int* ptr=&a;
    int** ptr2=&ptr;
    cout<<*(&a)<<endl;//observe here 
    cout<<*(ptr)<<endl;//both same as ptr store the address only soo
    cout<<**(ptr2)<<endl;//double deferencing means it gives value of a;
}