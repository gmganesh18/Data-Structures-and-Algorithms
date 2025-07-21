// #include<iostream>
// #include<vector>
// #include<string>
// #include<climits>
// using namespace std;
// int main(){
//     string str="cadbzabcd";
//     int left=0;
//     int right=0;
//     int maxLen=INT_MIN;
//     for(int i=0;i<str.length();i++){
//         string str1="";
//         vector<int>hash(256,0);
//         int length=0;
//         for(int j=i;j<str.length();j++){
//             if(hash[str[j]]==1){
//                 break;
//             }
//             str1+=str[j];
//             length+=1;
//             maxLen=max(maxLen,length);
//             hash[str[j]]=1;
//         }
//    }
//    cout<<maxLen;
// }


#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;
int main(){
    string str="cadbzabcd";
    int left=0;
    int right=0;
    int maxLen=0;
    vector<int>hash(256,-1);
    while(right<str.length()){
        if(hash[str[right]]!=-1){
            if(hash[str[right]]>=left){
                left=hash[str[right]]+1;
            }
        }
        maxLen=max(maxLen,right-left+1);
        hash[str[right]]=right;
        right++;

    }
   cout<<maxLen;
}