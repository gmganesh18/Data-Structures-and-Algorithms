//destructor is used to destruct the dynamically allowcated memeoryes 
//like in this below code how we pointed percentage
//if we didnt create our own destructor means ..compiler khud call the destructor
//also if the programs end means also dymanically allowcated memeory will be freeed(deleted).....
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Student{
public:
    string name;
    string usn;
    int marks;
    double* percentage;

    Student(){
        cout<<"This is from custom constructor";
    }
    Student(string name,string usn,int marks,double cgpa){
        this->name=name;
        this->usn=usn;
        this->marks=marks;
        percentage= new double;
        *this->percentage=cgpa;
    }
    ~Student(){
        cout<<"this is from Destructor";
        delete percentage;//always we delete pointer which are pointing to one memeory address
    }


    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"USN : "<<usn<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<"Percentage : "<<*percentage<<endl;
    }
};
int main(){
    Student s1("Ganesh","072",100,90);
    s1.getInfo();
}