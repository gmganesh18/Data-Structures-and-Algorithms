#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n=str.length();
    // aeiou
    // ganesh
    int left=0;
    int right=n-1;
    while(left<right){
        if((str[left]=='a' || str[left]=='e' || str[left]=='i' || str[left]=='o' || str[left]=='u') && (str[right]=='a' || str[right]=='e' || str[right]=='i' || str[right]=='o' || str[right]=='u')){
            swap(str[left],str[right]);
            left++;
            right--;
        } 
        else if((str[left]=='a' || str[left]=='e' || str[left]=='i' || str[left]=='o' || str[right]=='u') && (str[right]!='a' && str[right]!='e' && str[right]!='i' && str[right]!='o' && str[right]!='u')){
            right--;
        }
        else if(str[left]!='a' && str[left]!='e' && str[left]!='i' && str[left]!='o' && str[left]!='u'){
            left++;
        }
        else{
            right--;
            left++;
        }
    }
    cout<<str<<endl;
}