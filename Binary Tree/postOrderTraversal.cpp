#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val):data(val),left(nullptr),right(nullptr){}
};

void postOrder(Node* node){
    if(node==nullptr){
        return;
    }
    postOrder(node->left);
    postOrder(node->right);
    cout<<node->data<<" ";
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

    cout<<"Postorder Traversal : ";
    postOrder(root);
    cout<<endl;
}

