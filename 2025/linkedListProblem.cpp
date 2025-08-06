#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
Node* arrayToLL(vector<int>&input){
    Node* head=new Node(input[0]);
    Node* temp=head;
    for(int i=1;i<input.size();i++){
        Node* newNode=new Node(input[i]);
        temp->next=newNode;
        temp=newNode;
    }
    return head;
}
void Print(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void func(Node* head1,Node* head2){
    string str1="";
    string str2="";
    Node* temp1=head1;
    while(temp1!=nullptr){
        // str1+=(temp1->data-'0');
        str1+=to_string(temp1->data);
        temp1=temp1->next;
    }
    Node* temp2=head2;
    while(temp2!=nullptr){
        str2+=to_string(temp2->data);
        temp2=temp2->next;
    }
    reverse(str1.begin(),str1.end());
    reverse(str2.begin(),str2.end());
    int ans=stoi(str1)+stoi(str2);
    string temp;
    temp=to_string(ans);
    // cout<<temp<<endl;
    vector<int>out;
    for(int i=temp.size()-1;i>=0;i--){
        out.push_back(temp[i]-'0');
    }
    Node* anss=arrayToLL(out);
    Print(anss);
    // for(int ele:out)cout<<ele<<" ";
}
int main(){
    int n;
    int m;
    string str1;
    string str2;
    vector<int>input1;
    vector<int>input2;
    cin>>n;
    cin.ignore();
    string word="";
    getline(cin,str1);
    for(char ch:str1){
        if(ch!=' '){
            word+=ch;
        }
        else{
            if(!word.empty()){
                input1.push_back(stoi(word));
                word="";
            }
        }
    }
    if(!word.empty()){
        input1.push_back(stoi(word));
    }
    string word1="";
    cin>>m;
    cin.ignore();
    getline(cin,str2);
    for(char ch:str2){
        if(ch!=' '){
            word1+=ch;
        }
        else{
            if(!word1.empty()){
                input2.push_back(stoi(word1));
                word1="";
            }
        }
    }
    if(!word1.empty()){
        input2.push_back(stoi(word1));
    }
    Node* head1=arrayToLL(input1);
    Node* head2=arrayToLL(input2);
    func(head1,head2);
}