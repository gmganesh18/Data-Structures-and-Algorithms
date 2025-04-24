//The problem statement is given one array and in that array there is one number in which one number is two times repeated and we need to find out that number and also we need to find which is missing number
// arr=[3,4,1,3,5,2];
// 3 is repeated and 6 is missing number

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void swapSort(vector<int>&array,int n){
    // [3,2,1,4,1];
    int i=0;
    while(i<n){
        if(array[i]!=i+1 && array[i]!=array[array[i]-1]){
            swap(array[i],array[array[i]-1]);
        }
        else{
            i+=1;
        }
    }
    //[1,2,3,4,1]
    for(int i=0;i<n;i++){
        if(array[i]!=i+1){
            cout<<"Missing Number is: "<<i+1<<endl;
            cout<<"Repeated Number is: "<<array[i]<<endl;
            return;
        }
    }
}
int main(){
    vector<int>array={3,2,1,4,1};
    int n=array.size();
    swapSort(array,n);
}