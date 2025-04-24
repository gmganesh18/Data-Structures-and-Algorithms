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
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* VectorToLinkedList(vector<int>nums){
    Node* head=new Node(nums[0]);
    Node* mover=head;
    for(int i=1;i<nums.size();i++){
        Node* temp=new Node(nums[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
bool CheckIfPresent(Node* head,int val){
    Node* temp=head;
    while(temp){
        if(temp->data==val)return true;
        temp=temp->next;
    }
    return false;
}
void print(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* deleteHead(Node* head){
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}
Node* deleteTail(Node* head){
    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=nullptr;
    return head;
}
Node* InsertElementAtLast(Node* head,int val){
    Node* temp=head;
    Node* prev=nullptr;
    while(temp){
        prev=temp;
        temp=temp->next;
    }
    Node* value=new Node(val);
    prev->next=value;
    value->next=nullptr;
    return head;
}
Node* insertElementOneBehindTail(Node* head,int val){
    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    Node* value=new Node(val);
    Node* temp2=temp->next;
    temp->next=value;
    value->next=temp2;
    temp2->next=nullptr;
    return head;
}
int main(){
    vector<int>nums={1,2,3,4,5};
    Node* head=VectorToLinkedList(nums);


    // Node* temp=head;
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
    // cout<<CheckIfPresent(head,8);
    // head=deleteHead(head);
    // head=deleteTail(head);
    // head=InsertElementAtLast(head,5);
    head=insertElementOneBehindTail(head,10);
    print(head);
}