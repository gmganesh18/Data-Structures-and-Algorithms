// inheritance means parent class erutte matte child class erutte ...parent class alli ero properties na child class ge inherit madodu andre 
// parent class properties na child class alli use madodu andre access erutte aa properties
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class School{
public:
    string name;
    int rollNo;
    School(){
        cout<<"This is Parent"<<endl;
    }
    ~School(){
        cout<<"This is Parent destructor"<<endl;
    }
};
class Students : public School{//syntax
public:
    int marks;
    Students(){
        cout<<"This is Child"<<endl;
    }
    ~Students(){
        cout<<"This is Child destructor"<<endl;
    }
};
int main(){
Students s1;
s1.name="Ganesh";
s1.rollNo=72;
s1.marks=100;
cout<<"Name : "<<s1.name<<endl;
cout<<"RollNo : "<<s1.rollNo<<endl;
cout<<"Marks : "<<s1.marks<<endl;
}


//interview question yenta andre
// yav class modlu call agutee anta ???????????
// >>>>>>>--------- parent class modlu execute agutte amele child class agutte ---------<<<<<<<<
//destructor alli first child class modlu executte agutte andre (delete agutee dynamic agi allowt agittu) amele parent destructor 