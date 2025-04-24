#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Node{
    int val;
    Node* next;

    Node(int val1,Node* next1=nullptr){
        val=val1;
        next=next1;
    }
};
Node* arrayToLinkedList(vector<int>&nums){
    Node* head=new Node(nums[0]);
    Node* temp=head;
    for(int i=1;i<nums.size();i++){
        Node* newNode=new Node(nums[i]);
        temp->next=newNode;
        temp=newNode;
    }
    return head;
}
int countElement(Node* head){
    int counter=0;
    Node* temp=head;
    while(temp){
        counter++;
        temp=temp->next;
    }
    return counter;
}
void RemoveElementFromNums(Node* head,int valueIndex){
    int counter=countElement(head);
    int elementIndexToRemove=counter-valueIndex;
    Node* prev=nullptr;
    Node* temp=head;
    while(temp){
        if(elementIndexToRemove==0){
            Node* next=temp->next;
            prev->next=next;
            delete(temp);
            return;
        }
        prev=temp;
        temp=temp->next;
        elementIndexToRemove--;
    }
}
void printElements(Node* head){
    if(head==nullptr){
        cout<<"[]";
    }
    else{
        Node* temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
}
int main(){
    vector<int>nums;
    string str;
    string word="";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            word+=str[i];
        }
        else if(!word.empty()){
            nums.push_back(stoi(word));
            word="";
        }
    }
    if(!word.empty()){
        nums.push_back(stoi(word));
    }
    int valueIndex;
    cin>>valueIndex;
    Node* head=arrayToLinkedList(nums);
    RemoveElementFromNums(head,valueIndex);
    printElements(head);
}