#include<iostream>
#include<vector>
using namespace std;
void printPattern(int n){
    vector<vector<char>>result;
    int ele=n;
    int maxi=n*2-1;
    int start=-1;
    int end=maxi;
    while(ele>=1){
        for(int i=0;i<maxi;i++){
            vector<char>temp;
            for(int j=0;j<maxi;j++){
                if(start==-1 && end==maxi){
                    temp.push_back(ele+'0');
                }
                else if(j>start && j<end){
                    temp.push_back(ele+'0');
                }
                else{
                    temp.push_back(' ');
                }
            }
            start++;
            end--;
            ele--;
            result.push_back(temp);
        }
    }
    start-=2;
    // cout<<start;
    end+=2;
    // cout<<end<<endl;
    ele=2;
    while(ele<=n){
        for(int i=0;i<maxi;i++){
            vector<char>temp;
            for(int j=0;j<maxi;j++){
                if(start==-1 && end==maxi){
                    temp.push_back(ele+'0');
                }
                else if(j>start && j<end){
                    temp.push_back(ele+'0');
                }
                else{
                    temp.push_back(' ');
                }
            }
            start--;
            end++;
            ele++;
            result.push_back(temp);
        }
    }

    // for(auto const& pair:result){
    //     for(auto const& ch:pair){
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }
}
int main(){
    int n;
    cin>>n;
    printPattern(n);
}