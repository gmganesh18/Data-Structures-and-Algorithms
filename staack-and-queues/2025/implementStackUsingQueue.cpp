#include<iostream>
#include<queue>
using namespace std;
class stack{
    queue<int>q;
    public:
    void Push(int x){
        int s=q.size();
        q.push(x);
        for(int i=0;i<s;i++){
            q.push(q.front());
            q.pop();
        }
    }
    int Pop(){
        int n=q.front();
        q.pop();
        return n;
    }
    int Top(){
        return q.front();
    }
    int Size(){
        return q.size();
    }
};
int main(){
    stack s;
    s.Push(4);
    s.Push(3);
    s.Push(2);
    cout<<"The Poppped element is:"<<s.Pop()<<endl;
    cout<<"The top element is : "<<s.Top();
    cout<<"The size is"<<s.Size();
    s.Push(8);
}
