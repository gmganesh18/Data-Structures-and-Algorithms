#include<iostream>
#include<string>
using namespace std;
int main(){
    string start="_L__R__R_";
    string target="L______RR";
    string temp=start;
    int n=start.length();
    for(int i=0;i<n;i++){
        if(start[i]=='L'){
            while(temp[i]!=target[i]){
                temp[i-1]=start[i];
                temp[i]='_';
            }
            
        }
        else if(start[i]=='R'){
            while(temp[i]!=target[i]){
                temp[i+1]=start[i];
                temp[i]='_';
            }
        }
    }
    cout<<temp<<endl;
    cout<<target<<endl;
    if(temp==target){
        cout<<"TRUE"<<endl;
    }
    else cout<<"FALSE"<<endl;
}