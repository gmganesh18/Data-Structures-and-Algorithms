#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val):data(val),left(nullptr),right(nullptr){}
};

vector<int>inorder(Node* root){
    vector<int>ans;
    if(root==nullptr)return ans;
    stack<Node*>st;
    Node* node=root;
    while(true){
        if(node!=nullptr){
            st.push(node);
            node=node->left;
        }
        else{
            if(st.empty()==true)break;
            node=st.top();
            st.pop();
            ans.push_back(node->data);
            node=node->right;
        }
    }
    return ans;
}
int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->right=new Node(6);
    root->left->right->left=new Node(7);
    root->left->right->right=new Node(8);

    cout<<"Iterative Inorder Traversed result: ";
    vector<int>result=inorder(root);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}