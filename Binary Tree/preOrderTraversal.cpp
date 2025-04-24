#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val):data(val),left(nullptr),right(nullptr){}
};

void preorder(Node* node){
    if(node==nullptr){
        return;
    }
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->left->right=new Node(7);
    root->right->left->right->left=new Node(8);
    root->right->left->right->right=new Node(9);

    cout<<"Preorder Traversal : ";
    preorder(root);
    cout<<endl;
}