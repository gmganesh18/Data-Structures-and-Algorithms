#include<iostream>
using namespace std;
#include<vector>
class Node{
    public:
    int data;
    Node* next;

    public:
    Node (int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* arrToLinkedList(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    int n=arr.size();
    for(int i=1;i<n;i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
}
Node* reverseLinkedList(Node* head){
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        Node* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }

}
int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head=arrToLinkedList(arr);

    cout<<reverseLinkedList(head);
}