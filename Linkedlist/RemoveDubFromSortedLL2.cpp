#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
struct Node{
    int val;
    Node* next;
    Node(int data):val(data),next(nullptr){}
};
Node* arrayToLL(vector<int>&nums,int n){
    Node* head=new Node(nums[0]);
    Node* temp=head;
    for(int i=1;i<n;i++){
        Node* newNode= new Node(nums[i]);
        temp->next=newNode;
        temp=newNode;
    }
    return head;
}
vector<int>removDubSorted2(vector<int>&nums,int n){
    vector<int>result;
    if(nums.size()==1){
        return nums;
    }
    map<int,int>map;
    for(int ele:nums){
        map[ele]++;
    }
    for(auto ele=map.begin();ele!=map.end();++ele){
        if(ele->second==1){
            result.push_back(ele->first);
        }
    }
    return result;
}
Node* removeDub(Node* head){
    map<int,int>mp;
    Node* temp=head;
    while(temp!=nullptr){
        mp[temp->val]++;
        temp=temp->next;
    }
    Node* newHead;
    temp=newHead;
    for(auto it=mp.begin();it!=mp.end();++it){
        if(it->second==1){
            newHead=new Node(it->first);
            mp[it->first]--;
            break;
        }
    }
    for(auto it=mp.begin();it!=mp.end();++it){
        if(it->second==1){
            Node* newhead=new Node(it->first);
            temp->next=newhead;
            temp=temp->next;
        }
    }
    return newHead;
}
void printLL(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->val<<'->';
        temp=temp->next;
    }
}
int main(){
    vector<int>nums={1,2,3,3,4,4,5};
    int n=nums.size();
    Node* head=arrayToLL(nums,n);
    // vector<int>result=removDubSorted2(nums,n);
    // for(int ele:result){
        // cout<<ele<<" ";
    // }
    Node* newHead=removeDub(head);
    printLL(newHead);
}