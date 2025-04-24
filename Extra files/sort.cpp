#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr1[]={1,3,7,9,13};
    int arr2[]={2,5,8};
    int size1=sizeof(arr1)/sizeof(int);
    int size2=sizeof(arr2)/sizeof(int);
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
                if(arr1[i]<arr2[j]){
                    continue;
                }
                else if(arr1[i]>arr2[j]){
                    swap(arr1[i],arr2[j]);
                    sort(arr2,arr2+size2);
                }
        }
    }
    for(int i=0;i<size1;i++){
        cout<<arr1[i]<<" ";
    }cout<<endl;
    for(int i=0;i<size2;i++){
        cout<<arr2[i]<<" ";
    }cout<<endl;

}