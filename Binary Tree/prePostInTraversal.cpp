#include<iostream>
#include<vector>
#include<stack>
using namespace std;
struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int val):data(val),left(nullptr),right(nullptr){}
};

vector<int>preInPost(TreeNode* root){
    stack<pair<TreeNode*,int>>st;
    st.push({root,1});
    vector<int>pre,in,post;
    if(root==nullptr)return;
    while(!st.empty()){
        auto it=st.top();
        st.pop();

        if(it.second==1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->left!=nullptr){
                st.push({it.first->left,1});
            }
        }
        else if(it.second==2){
            in.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->left!=nullptr){
                st.push({it.first->left,2});
            }
        }
    }
}

int main(){
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->left->left=new TreeNode(3);
    root->left->left->right=new TreeNode(4);
    root->left->left->right->right=new TreeNode(5);
    root->left->left->right->right->right=new TreeNode(6);
    root->right=new TreeNode(7);
    root->right->left=new TreeNode(8);

    vector<int>ans=preInPost(root);
}