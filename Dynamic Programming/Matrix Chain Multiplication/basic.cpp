#include<iostream>
#include<vector>
using namespace std;
                               1     3
int solve(vector<int> nums, int i, int j) {
    if(i >= j) {
        return 0;
    }
    int mn = INT_MAX;
                1         2  
    for(int k = i; k <= j - 1; k++) {
        int temp = solve(nums, i, k) + solve(nums, k + 1, j) + nums[i - 1] * nums[k] * nums[j];
        if(temp < mn) {
            mn = temp;
        }
    }
    return mn;
}                   0   1   2    3
                  [12, 43 , 53 , 15];
int main(){
    

}