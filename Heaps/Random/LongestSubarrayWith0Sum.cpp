#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={15,-2,2,-8,1,7,10,23};
    // vector<int>arr={1,2,3};
    int n=arr.size();
    int maxLen=0;
    for(int i=0;i<n;i++){
        int summ=0;
        for(int j=i;j<n;j++){
            summ+=arr[j];
            if(summ==0){    
                maxLen=max(maxLen,j-i+1);
            }
        }
        
    }
    cout<<maxLen<<endl;
    
}