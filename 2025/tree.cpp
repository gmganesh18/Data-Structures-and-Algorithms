#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int data1):data(data1),left(nullptr),right(nullptr){}
};
int Count(Node* head){
    if(head==nullptr){
        return 1;
    }
    int left=Count(head->left);
    int right=Count(head->right);
    return left+right;
}
int main(){

}