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
Node* print(Node* head){
    while(head !=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* deleteHead(Node* head){
    if (head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* deletetail(Node* head){
    if(head==NULL || head->next==NULL) return NULL;
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
Node* deleteK(Node* head,int k){
    if(head==NULL) return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int count=0;
    Node* temp=head;
    Node* Previous=NULL;
    while(temp!=NULL){
        count++;
        if(count==k){
            Previous->next=Previous->next->next;
            free(temp);
            break;
        }
        Previous=temp;
        temp=temp->next;
    }
    return head;
}

Node* deleteKK(Node* head,int k){
    if(head==NULL)return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int count=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        count++;
        if(count==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
Node* deleteElement(Node* head,int ele){
    if(head==NULL)return head;
    if(head->data==ele){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        if(temp->data==ele){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node* insertHead(Node* head,int val){
    // Node* temp=new Node(val,head);
    // return temp;
    //or
    return new Node(val,head);
}

Node* insertTail(Node* head,int val){
    if(head==NULL)return new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
    return head;
}

Node* insertAtK(Node* head,int ele,int k){
    if(head==NULL){
        if(k==1){
            // return new Node(ele);
            Node* element=new Node(ele);
            return element;
        }
        else{
            return head;
        }
    }
    if(k==1){
        Node* newnode=new Node(ele,head);
        return newnode;
    }
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k-1){
            Node* newEle=new Node(ele,temp->next);
            temp->next=newEle;
            break;
        }
        temp=temp->next;
    }
    return head;
}

Node* insertBeforeValue(Node* head,int ele,int value){
    if(head==NULL)return NULL;
    if(head->data==value){
        return new Node(ele,head);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        if(temp->next->data=value){
            Node* element=new Node(ele,temp->next);
            temp->next=element;
        }
        temp=temp->next;
    }
    return head;
}
Node* removeNthFromEnd(Node* head, int n){
        if(head==NULL)return NULL;
        if(n==1){
            Node* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        Node* temp=head;
        Node* prev=NULL;
        int count=0;
        while(temp!=NULL){
            
            if(count==n){
                break;
            }
            count++;
            prev=temp;
            temp=temp->next;

        }
        prev->next=temp->next;
        temp->next=nullptr;
        delete temp;
        return head;
}
int main(){
    vector<int> arr={12, 5, 8, 7};
    // vector<int> arr={NULL};
    Node* head=convertArr2LL(arr);
    // head=deleteHead(head);
    // head=deletetail(head);
    // print(head);

    // head=deleteKK(head,2);
    // print(head);


    // head=deleteElement(head,8);
    // print(head);

    // head=insertHead(head,100);
    // print(head);

    // head=insertTail(head,100);
    // print(head);

    // head=insertAtK(head,10,6);
    // print(head);

    // head=insertBeforeValue(head,100,12);

    head=removeNthFromEnd(head,0);
    print(head);


}