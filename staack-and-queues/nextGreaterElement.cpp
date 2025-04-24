#include<iostream>
using namespace std;
#include<vector>
#include<stack>
int main(){
    vector<int>num1 = {2,4};
    vector<int>num2={1,2,5,4};
    vector<int>ans;
    for(int i=0;i<num1.size();i++){
        bool found=false;
        for(int j=0;j<num2.size();j++){
            if(num1[i]==num2[j]){
                for(int k=j+1;k<num2.size();k++){
                    if(num2[j]<num2[k]){
                        ans.push_back(num2[k]);
                        found=true;
                        break;
                    }
                }
                if(!found){
                        ans.push_back(-1);
                }


            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
        if(i<ans.size()-1){
            cout<<",";
        }
    }

}