#include<iostream>
#include<stack>
using namespace std;
class MinStack{
public:
stack<int>s;
int minElement;
void Push(int x){
    if(s.empty()){
        s.push(x);
        minElement=x;
    }
    else{
        if(x>=minElement){
            s.push(x);
        }
        else if(x<minElement){
            s.push(2*x-minElement);
            minElement=x;
        }
    }
}
int Pop(){
    int temp;
    if(s.empty()){
        return -1;
    }
    else{
        if(s.top()>=minElement){
            temp=s.top();
            s.pop();
        }
        else if(s.top()<minElement){
            temp=minElement;
            minElement=2*minElement-s.top();
            s.pop();
        }
    }
    return temp;
}
int Top(){
    if(s.empty()){
        return -1;
    }
    else{
        if(s.top()>=minElement){
            return s.top();
        }
        else if(s.top()<minElement){
            return minElement;
        }
    }
}
int MinElement(){
    if(s.empty())return -1;
    return minElement;
} 
};
int main(){
    MinStack s1;
    s1.Push(18);
    s1.Push(18);
    s1.Pop();
    s1.Push(14);
    s1.Pop();
    s1.Pop();
    cout<<s1.Top()<<endl;
    cout<<s1.MinElement()<<endl;
}