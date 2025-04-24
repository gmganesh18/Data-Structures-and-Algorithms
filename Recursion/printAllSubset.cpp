#include<iostream>
#include<string>
using namespace std;
void subString(string inp,string out){
    if(inp.length()==0){
        cout << out << " " << flush;
        return;
    }
    string out1=out;
    string out2=out;
    out2.push_back(inp[0]);
    inp.erase(inp.begin()+0);
    subString(inp,out1);
    subString(inp,out2);
    return;
}
int main(){
    string inp="abc";
    string out="";
    subString(inp,out);
}

#include<iostream>
#include<string>
using namespace std;

// void subString(string inp, string out) {
//     cout << "Function call: inp = " << inp << ", out = " << out << endl; // Debug
//     if (inp.length() == 0) {
//         cout << "Output: " << out << endl; // Debug
//         return;
//     }
//     string out1 = out;
//     string out2 = out;
//     out2.push_back(inp[0]);
//     inp.erase(inp.begin() + 0);
//     subString(inp, out1);
//     subString(inp, out2);
//     return;
// }

int main() {
    string inp = "abc";
    string out = "";
    // subString(inp, out);
    cout<<inp;
    return 0;
}
