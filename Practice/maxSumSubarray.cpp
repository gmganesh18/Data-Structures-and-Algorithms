// #include<iostream>
// #include<vector>
// #include<climits>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main(){
//     vector<int>arr={9,1,3,2,5,2,10};
//     int n=arr.size();
//     int k=3;
//     //we need to find the maximum sum in the 3 sized window
//     int maxSum=INT_MIN;
//     for(int i=0;i<n-k+1;i++){
//         int sum=0;
//         for(int j=i;j<i+k;j++){
//             sum+=arr[j];
//         }
//         maxSum=max(maxSum,sum);
//     }
//     cout<<maxSum;
// }


// #include<iostream>
// #include<vector>
// #include<climits>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main(){
//     vector<int>arr={9,1,3,2,5,2,10};
//     int n=arr.size();
//     int k=3;
//     int i=0;
//     int j=3;
//     int sum=0;
//     for(int a=0;a<k;a++){
//         sum+=arr[a];
//     }
//     int maxSum=sum;
//     while(i<n-k){
//         sum+=arr[j];
//         sum-=arr[i];
//         j++;
//         i++;
//         maxSum=max(maxSum,sum);
//     }
//     cout<<maxSum;
// }


#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    vector<int>arr={9,1,3,2,5,2,10};
    int n=arr.size();
    int k=3;
    int start=0;
    int end=0;
    int maxSum=INT_MIN;
    int sum=0;
    while(end<n){
        sum+=arr[end];
        if(end-start+1<k){
            end++;
        }
        if(end-start+1==k){
            maxSum=max(sum,maxSum);
            cout<<maxSum<<endl;
        }
        sum-=arr[start];
        start++;
        end++;
    }
    cout<<maxSum;
}