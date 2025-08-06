#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct ListNode{
public:
    int val;
    ListNode* next;

    ListNode(int data){
        val=data;
        next=nullptr;
    }
};
ListNode* arrayToLinkedList(vector<int>&nums,int n,int pos){
    ListNode* head=new ListNode(nums[0]);
    ListNode* temp=head;
    for(int i=1;i<n;i++){
        ListNode* temmp=new ListNode(nums[i]);
        temp->next=temmp;
        temp=temmp;
    }
    ListNode* newTemp=head;
    int poss=pos;
    while(pos-1>0){
        newTemp=newTemp->next;
        pos--;
    }
    if(poss>0){
        temp->next=newTemp;
    }
    
    return head;
}
void print(ListNode* head){
    ListNode* temp=head;
    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
    vector<int>nums={1,2,3,4,5};
    int n=nums.size();
    int pos=5;
    ListNode* head=arrayToLinkedList(nums,n,pos);
    print(head);
}