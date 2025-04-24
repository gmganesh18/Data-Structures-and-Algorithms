#include<iostream>
#include<vector>
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
Node* ArrayToLinkedList(vector<int>&array){
    Node* head=new Node(array[0]);
    Node* mover=head;
    for(int i=1;i<array.size();i++){
        Node* temp=new Node(array[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void printLinkedList(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    vector<int>array={1,2,3,4,5,6};
    Node* head=ArrayToLinkedList(array);
    printLinkedList(head);
}