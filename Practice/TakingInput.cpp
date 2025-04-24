// [1,2,3,4]
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cin>>str;
//     vector<int>arr;
//     for(int i=0;i<str.length();i++){
//         if(isdigit(str[i])){
//             arr.push_back(str[i]-'0');
//         }
//     }
//     for(int ele:arr){
//         cout<<ele<<" ";
//     }
// }

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>ans;
    string temp;
    while(n>0 && cin>>temp){
        ans.push_back(temp);
        n--;
    }
    for(string ele:ans){
        cout<<ele<<" ";
    }
}