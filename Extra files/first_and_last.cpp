#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec1 = {1,2,3,4,5,6,7,6,8};
    int target=9;
    int n=vec1.size();
    int low=-1,high=-1;
    for(int i=0;i<n;i++){
        if(vec1[i]==target){
            if(low==-1){
                low=i;
            }
            high=i;
        }
    }
    cout<<low<<high<<endl;
}