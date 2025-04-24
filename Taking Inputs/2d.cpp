#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;

    vector<vector<string>>words;
    string word="";
    vector<string>rows;

    for(char c:str){
        if(c=='[')continue;
        else if(c=='"')continue;
        else if(c==','){
            if(!word.empty()){
                rows.push_back(word);
                word="";
            }
        }
        else if(c==']'){
            if(!rows.empty()){
                rows.push_back(word);
                words.push_back(rows);
                rows.clear();
                word="";
            }
        }
        else{
            word+=c;
        }
    }
    cout<<"[";
    for(auto vec:words){
        for(string st:vec){
            cout<<st<<" ";
        }
        cout<<endl;
    }
    cout<<"]";
}