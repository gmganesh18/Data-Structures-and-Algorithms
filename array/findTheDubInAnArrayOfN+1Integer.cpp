// Find the dublicate in an array pf n+1 integers

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>nums={1,3,4,2,2};
//     int n=nums.size();
//     int ele=-1;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(nums[i]==nums[j]){
//                 ele=nums[i];
//                 break;
//             }
//         }
//     }
//     cout<<ele<<endl;
// }               Brute


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={1,3,4,2,2};
    int n=nums.size();
    int ele=-1;
    for(int i=0;i<n;i++){
        if(nums[i]==ele){
            cout<<ele;
        }
        ele=nums[i];
    }
}



