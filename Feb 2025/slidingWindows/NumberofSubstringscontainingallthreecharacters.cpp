// Number of Substrings containing all three characters
// bbacba
// the question is we need to cont the substring which contain all char in a singl substring


#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;
void functionForThat(string str){
    int hashmap[3];
    fill(hashmap,hashmap+3,-1);
    int count=0;
    for(int i=0;i<str.length();i++){
        hashmap[str[i]-'a']=i;
        if(hashmap[0]!=-1 && hashmap[1]!=-1 && hashmap[2]!=-1){
            count=count+(1+min(hashmap[0],min(hashmap[1],hashmap[2])));
        }
    }
    cout<<count;
}
int main(){
    string str="bbacba";
    functionForThat(str);
    // int count=0;
    // int n=str.length();
    // set<char>st;
    // for(char it:str){
    //     st.insert(it);
    // }
    // int nn=st.size();
    // for(int i=0;i<n;i++){
    //     int hash[nn];
    //     fill(hash,hash+n,0);
    //     for(int j=i;j<n;j++){
    //         hash[str[j]-'a']=1;
    //         int temp=0;
    //         for(int it:hash){
    //             temp+=it;
    //             if(temp==nn){
    //                 count++;
    //             }
    //         }
    //     }
    // }
    // cout<<count;
    
}