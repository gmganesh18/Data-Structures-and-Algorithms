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
    Student(Student &obj){
        this->name=obj.name;
        this->usn=obj.usn;
        this->marks=obj.marks;
        percentage=new double;
        *percentage=*obj.percentage;
    }
    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"USN : "<<usn<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<"Percentage : "<<*percentage<<endl;
    }
};
int main(){
    Student s1("name","072",100,90);
    // s1.getInfo();
    Student s2(s1);
    *s2.percentage=100;
    s2.name="Priya";
    s2.getInfo();

}