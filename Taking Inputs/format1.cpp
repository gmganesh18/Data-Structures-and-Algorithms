

// // ["abc","aca","dsa"]

// #include <iostream>
// #include<string>
// #include <vector>
// using namespace std;

// int main() {
//     string str;
//     cin>>str;

//     str=str.substr(1,str.length()-2);

//     vector<string>words;
//     string word="";
//     for(char c:str){
//         if(c=='"')continue;
//         if(c==','){
//             words.push_back(word);
//             word="";
//         }
//         else{
//             word+=c;
//         }
//     }
//     words.push_back(word);
//     for(string st:words){
//         cout<<st<<endl;
//     }
// }


#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    str=str.substr(1,str.length()-2);
    vector<string>words;
    string word="";

    for(char c:str){
        if(c=='"')continue;
        else if(c==','){
            words.push_back(word);
            word="";
        }
        else{
            word+=c;
        }
    }
    words.push_back(word);

    for(string c:words){
        cout<<c<<" ";
    }
}