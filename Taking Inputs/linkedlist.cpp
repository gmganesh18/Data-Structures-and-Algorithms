#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int data1,Node* next1=nullptr){
        data=data1;
        next=next1;
    }

}; 
Node* arraytolinkedList(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
}
int main(){
    vector<int>arr={1,2,3,4,5};
    Node* head=arraytolinkedList(arr);
}