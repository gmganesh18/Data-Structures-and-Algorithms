#include<iostream>
using namespace std;
int  main(){
    // char ch;
    // cin>>ch;
    // int asciiValue=int(ch);
    // cout<<asciiValue<<endl;
    string ch;
    int count=0;
    cin>>ch;
    for(int i=0;i<ch.length();i++){
        cout<<int(ch[i])<<endl;
        int ascii=int(ch[i]);
        count+=ascii;
    }
    cout<<count<<endl;
}