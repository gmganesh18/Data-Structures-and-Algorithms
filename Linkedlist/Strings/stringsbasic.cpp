#include<iostream>
using namespace std;
char UpperToLower(char ch){
    if(ch>='a' && ch<='z')return ch;
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverseName(char name[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(name[start],name[end]);
        start++;
        end--;
    }
}

int main(){
    // char name[20];
    // cout<<"Enter your name: "<<endl;
    // cin>>name;
    // cout<<"Your name is ";
    // cout<<name;
    // int len=getlength(name);
    // cout<<"Length :"<<getlength(name)<<endl;
    // reverseName(name,len);
    // cout<<name<<endl;

    // cout<<UpperToLower('A')<<endl;

    string st="GANESH";
    st[2]='\0';
    cout<<"below is for string"<<endl;
    cout<<st<<endl;

    char ch[20]="GANESH";
    ch[2]='\0';
    cout<<"below if for Char"<<endl;
    cout<<ch<<endl;
    

}