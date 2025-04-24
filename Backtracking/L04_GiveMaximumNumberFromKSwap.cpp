#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void maximumNumber(string &str,int k){
    int i=0;
    while(k>0 && i<str.length()){
        int maxi=i;
        for(int j=i+1;j<str.length();j++){
            if(str[j]>str[maxi]){//maxi is must becasue to always get maxi elements(think little bit)
                maxi=j;
            }
        }
        if(maxi!=i){
            swap(str[i],str[maxi]);
            k--;
        }
        i++;
    }
}
int main(){
    string str="1234567";
    int k=4;
    maximumNumber(str,k);//This is greedy approach...........
    cout<<str<<endl;
}