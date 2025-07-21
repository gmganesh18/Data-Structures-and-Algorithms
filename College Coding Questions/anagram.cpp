#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;
bool checkAnagram(vector<string>&input){
    string st1=input[0];
    string st2=input[1];
    sort(st1.begin(),st1.end());
    sort(st2.begin(),st2.end());
    return (st1==st2);
}
int main(){
    vector<string>input={"ravi","aivr"};
    bool result=checkAnagram(input);
    (result == 1) ? cout << "True" : cout << "False";
}



// to convert strings to lowercase
// transform(str1.begin(),str1.end(),str1.begin(),::tolower);