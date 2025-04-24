#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,5};
    int n=arr.size();
    arr.erase(arr[2]);
}