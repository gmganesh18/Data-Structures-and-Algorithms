#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val):data(val),left(nullptr),right(nullptr){}
};

// vector<vector<int>>levelOrder(Node* root){
//     vector<vector<int>>ans;
//     if(root==nullptr)return ans;
//     queue<Node*>q;
//     q.push(root);
//     while(!q.empty()){
//         int size=q.size();
//         vector<int>level;
//         for(int i=0;i<size;i++){
//             Node* node=q.front();
//             q.pop();
//             if(node->left!=nullptr)q.push(node->left);
//             if(node->right!=nullptr)q.push(node->right);
//             level.push_back(node->data);
//         }
//         ans.push_back(level);
//     }
//     return ans;
// }

vector<vector<int>>levelOrder(Node* root){
    vector<vector<int>>ans;
    if(root==nullptr)return ans;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int>level;
        for(int i=0;i<size;i++){
            Node* node=q.front();
            q.pop();
            if(node->left!=nullptr)q.push(node->left);
            if(node->right!=nullptr)q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}
int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    cout<<"Level Order BSF result: ";
    vector<vector<int>>ans=levelOrder(root);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
    }
}