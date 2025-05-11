#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string word="";
    vector<string>input;
    for(int i=0;i<str.length();i++){
        if(str[i]!='[' && str[i]!=']' && str[i]!='"' && str[i]!=','){
            word+=str[i];
        }
        else{
            if(!word.empty()){
                input.push_back(word);
                word="";
            }
        }
    }
    if(!word.empty()){
        input.push_back(word);
    }
    for(string ele:input){
        cout<<ele<<" ";
    }

}