#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    int first=0;
    int last=n-1;
    while(first<last){
        swap(arr[first],arr[last]);
        first++;
        last--;
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}