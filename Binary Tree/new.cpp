#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val):data(val),left(nullptr),right(nullptr){}
};
Node* createBST(vector<int>&input){
    Node* root=new Node(input[0]);
    queue<Node*>q;
    q.push(root);
    int i=1;
    while(i<input.size() && !q.empty()){
        Node* current=q.front();
        q.pop();
        //left node
        if(i<input.size()){
            current->left=new Node(input[i++]);
            q.push(current->left);
        }
        //right node
        if(i<input.size()){
            current->right=new Node(input[i++]);
            q.push(current->right);
        }
    }
    return root;
}
void inOrder(Node* root,vector<int>&result){
    if(root==nullptr){
        return;
    }
    inOrder(root->left,result);
    result.push_back(root->data);
    inOrder(root->right,result);
}
int main(){
    string str;
    string word="";
    vector<int>input;
    getline(cin,str);
    for(char st:str){
        if(st!=' '){
            word+=st;
        }
        else{
            if(!word.empty()){
                input.push_back(stoi(word));
                word="";
            }
        }
    }
    if(!word.empty()){
        input.push_back(stoi(word));
    }
    Node* root=createBST(input);
    vector<int>result;
    inOrder(root,result);
    cout<<'[';
    for(int i=0;i<result.size();i++){
        if(i==result.size()-1){
            cout<<result[i];
        }
        else{
            cout<<result[i]<<" ";
        }
    }
    cout<<']';
}