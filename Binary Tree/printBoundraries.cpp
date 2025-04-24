#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val):data(val),left(nullptr),right(nullptr){}
};
bool isLeaf(Node* root){
    if(root->left==nullptr || root->right==nullptr){
        return true;
    }
    return false;
}
void addLeftBoundary(Node* root,vector<int>&res){
    Node* curr=root->left;
    while(curr){
        if(!isLeaf(curr))res.push_back(curr->data);
        if(curr->left)curr=curr->left;
        else curr=curr->right;
    }
}
void addLeafNodes(Node* root,vector<int>&res){
    if(isLeaf(root)){
        res.push_back(root->data);
    }
    if(root->left)addLeafNodes(root->left,res);
    if(root->right)addLeafNodes(root->right,res);
}
void addRightBoundary(Node* root,vector<int>&res){
    Node* curr=root->right;
    vector<int>temp;
    while(curr){
        if(!isLeaf(curr))temp.push_back(curr->data);
        if(curr->right)curr=curr->right;
        else curr=curr->left;
    }
    for(int i=0;i<temp.size();i++){
        res.push_back(temp[i]);
    }
}
vector<int>printBoundary(Node* root){
    vector<int>res;
    if(root==nullptr)return res;
    if(!isLeaf(root))res.push_back(root->data);
    addLeftBoundary(root,res);
    addLeafNodes(root,res);
    addRightBoundary(root,res);
    return res;
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->left->left=new Node(3);
    root->left->left->right=new Node(4);
    root->left->left->right->left=new Node(5);
    root->left->left->right->right=new Node(6);
    root->right=new Node(7);
    root->right->right=new Node(8);
    root->right->right->left=new Node(9);
    root->right->right->left->left=new Node(10);
    root->right->right->left->right=new Node(11);
    vector<int>result=printBoundary(root);

    for(int ele:result){
        cout<<ele<<" ";
    }
}