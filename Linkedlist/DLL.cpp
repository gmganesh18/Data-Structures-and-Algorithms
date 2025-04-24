#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
Node* convertArr2DLL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
Node* deletehead(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;
}
Node* print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
Node* deletetail(Node* head){
    Node* prev=nullptr;
    Node* temp=head;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    temp->back=nullptr;
    prev->next=nullptr;
    return head;
}
Node* deletetail2(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* prev=tail->back;
    prev->next=nullptr;
    tail->back=nullptr;
    return head;
}
Node* RemoveKthElement(Node* head,int k){
    if(head==NULL)return NULL;
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k)break;
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* front=temp->next;

    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if(prev==NULL){
        return deletehead(head);
    }
    else if(front==NULL){
        return deletetail2(head);
    }
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;
}
void deleteNode(Node* temp){
    Node* prev=temp->back;
    Node* front=temp->next;

    if(front==NULL){
        prev->next=nullptr;
        temp->back=nullptr;
        free(temp);
        return;
    }
    prev->next=front;
    front->back=prev;
    temp->next=temp->back=nullptr;
    free(temp);
    
}
Node* insertElementBeforeHead(Node* head,int val){
    Node* newelement=new Node(val,head,nullptr);
    head->back=newelement;
    return newelement;
}
Node* insertElementBeforeTail(Node* head,int val){
    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* prev=tail->back;
    Node* newnode=new Node(val,tail,prev);
    prev->next=newnode;
    tail->back=newnode;
    return head;
}
Node* insertelementAfterKvalue(Node* head,int k,int val){
    Node* front=head->next;
    if(k==1){
        
        Node* newnode=new Node(val,front,head);
        head->next=newnode;
        front->back=newnode;
        return head;
    }
    
    Node* temp=head;
    int count=0;
    while(temp->next!=NULL){
        count++;
        if(count==k){
            break;
        }
        temp=temp->next;
    }
    if(temp->next==NULL){
        Node* newnode=new Node(val,nullptr,temp);
        temp->next=newnode;
        return head;
    }
    Node* front1=temp->next;
    Node* newnode=new Node(val,front1,temp);
    
    temp->next=newnode;
    front1->back=newnode;
    return head;

}

int main(){
    vector<int>arr={12,5,3,2};
    Node* head=convertArr2DLL(arr);
    // Node* head1=deletehead(head);
    // Node* head1=deletetail2(head);
    // Node* head1=RemoveKthElement(head,1);
    // deleteNode(head->next->next);

    // Node* head1=insertElementBeforeHead(head,10000);
    // Node* head1=insertElementBeforeTail(head,100);
    Node* head1=insertelementAfterKvalue(head,4,10);

    print(head1);
}