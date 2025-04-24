#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertArr2LL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1 ; i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
// int lengthofarray(Node* head){
//     Node* temp=head;
//     int count=0;
[1,2,3,4,5,6];
//     while(temp){
//         temp=temp->next;
//         count++;
//     }
//     return count;
// }

// int CheckIfPresnt(Node* head,int val){
//     Node* temp=head;
//     while(temp){
//         if(temp->data==val) return 1;
//         temp=temp->next;
//     }
//     return 0; 
// }

Node* deleteHead(Node* head){
    if (head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

int main(){
    vector<int> arr={12, 5, 8, 7};
    Node* head=convertArr2LL(arr);
    // // cout<<head->data;//to print the head
    // Node* temp=head;
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }//this code is for printing the elements from linkedlist

    // cout<<lengthofarray(head)<<endl;
    //below code is for checking if value is present
    // cout<<CheckIfPresnt(head,5);
    head=deleteHead(head);
    cout<<head;
}