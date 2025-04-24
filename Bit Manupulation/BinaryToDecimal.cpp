#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string binary="1001";
    int len=binary.length();
    int p2=1;
    int num=0;
    for(int i=len-1;i>=0;i--){
        if(binary[i]=='1'){
            num=num+p2;
        }
        p2=p2*2;
    }
    cout<<num<<endl;
}

