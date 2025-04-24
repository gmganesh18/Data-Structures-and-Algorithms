#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<string>strings={"bat","tab","rat"};
    int n=strings.size();
    for(int i=0;i<n;i++){
        string temp=strings[i];
        sort(temp.begin(),temp.end());
        strings[i]=temp;
    }
    vector<vector<string>>result;
    for(int i=0;i<n;i++){
        vector<string>temp1;
        temp1.push_back(strings[i]);
        for(int j=i+1;j<n;j++){
            if(strings[i]==strings[j]){
                temp1.push_back(strings[j]);
            }
            else{
                break;
            }
        }
        result.push_back(temp1);
    }
    int m=result.size();
    for(int i=0;i<m;i++){
        int size=result[i].size();
        cout<<"[";
        int j=0;
        while(size>0){
            cout<<result[i][j]<<" ";
            j++;
            size++;
        }
        cout<<"]";
    }
    
}