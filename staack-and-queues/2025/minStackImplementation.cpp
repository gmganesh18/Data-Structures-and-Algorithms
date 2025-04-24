#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class MinStack{
public:
stack<int>s;
stack<int>ss;//supporting stack for giving minimum;
void push(int value){
    if(s.empty()){
        s.push(value);
        ss.push(value);
    }
    else{
        s.push(value);
        if(s.top()<=ss.top()){
            ss.push(s.top());
        }
    }
}
int pop(){
    if(s.empty())return -1;
    int temp=s.top();
    if(s.top()==ss.top()){
        s.pop();
        ss.pop();
    }
    else{
        s.pop();
    }
    return temp;
}
int getMin(){
    if(ss.empty()){
        return -1;
    }
    return ss.top();
}
};

int main(){
MinStack st;
st.push(18);
st.push(19);
st.push(29);
st.push(15);
st.push(10);
st.push(10);
st.pop();
st.pop();
cout<<st.getMin()<<endl;
}