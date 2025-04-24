#include<iostream>
using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,8,6};
//     int n=sizeof(arr)/sizeof(int);
//     for(int i=0;i<n;i++){
//         bool flag=true;
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 cout<<arr[j]<<endl;
//                 flag=false;
//             }
//         }
//         if(flag==false){
//             break;
//         }
//     }

// }

int main(){
    int arr[]={1,2,3,5,4,5};
    int n=sizeof(arr)/sizeof(int);
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int sum1=(n*(n+1))/2;
    int sum_total=sum-sum1;
    cout<<sum_total;
}
