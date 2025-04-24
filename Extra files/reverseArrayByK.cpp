// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
//     int n = arr.size();
//     int k = 2;
//     k=k%n;
//     reverse(arr.begin(),arr.end()-k);
//     reverse(arr.end()-k,arr.end());
//     reverse(arr.begin(),arr.end());
//     for(int val : arr){
//         cout<<val<<" ";
//     }
//     cout<<endl;
// }

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int k;
    int n;
    vector<int>arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
}