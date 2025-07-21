
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=4;
    int temp=n;
    vector<vector<char>>result;
    int maxi=(n*2)-1;
    int start=-1;
    int end=maxi;
    while(temp>=1){
        vector<char>nums;
        if(start==-1 && end==maxi){
            for(int i=0;i<maxi;i++){
                nums.push_back(temp+'0');
            }
        }
        else{
            for(int i=0;i<maxi;i++){
                if(i>start && i<end){
                    nums.push_back(temp+'0');
                }
                else{
                    nums.push_back(' ');
                }
            }
        }
        start++;
        end--;
        temp--;
        result.push_back(nums);
    }
    temp=2;
    start-=2;
    end+=2;
    while(temp<=n){
        vector<char>nums;
        if(start==-1 && end==maxi){
            for(int i=0;i<maxi;i++){
                nums.push_back(temp+'0');
            }
        }
        else{
            for(int i=0;i<maxi;i++){
                if(i>start && i<end){
                    nums.push_back(temp+'0');
                }
                else{
                    nums.push_back(' ');
                }
            }
        }
        start--;
        end++;
        temp++;
        result.push_back(nums);
    }

    for (const auto& row : result) {
        for (char c : row) {
            cout << c << ' ';
        }
        cout << endl;
    }

}