// Pointer To Pointer 
// means in this example one pointer varible is there and it has some address that address can be stored in one more pointer 
// this method is called pointer to pointer


#include<iostream>
using namespace std;
int main(){
    int a=10;
    int* ptr=&a;

    int** ptr2=&ptr;//pointer to pointer ,storing the address of ptr

    cout<<&ptr<<endl;
    cout<<ptr2<<endl;
}