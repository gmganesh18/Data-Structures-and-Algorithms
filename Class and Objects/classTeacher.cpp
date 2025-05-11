#include<iostream>
#include<string>
using namespace std;
class Teacher{
private:
    double salary;
public:
    Teacher(){//creating our own constructor. If we didnt create constructor means c++ khud create its own constructor for creting object.... Constructor is created at the starting stage of invoking object
        cout<<"Hi, i am coustom constrctor"<<endl;//no return for constructor 
    }
    string name;
    string deprt;
    string subject;

    void changeDept(string newDept){
        deprt=newDept;
    }
    //setter
    void setSalary(double s){
        salary=s;
    }
    //getter
    double getSalary(){
        return salary;
    }
    // this setsalary and getsalary functions are indirect way of accesing salary
};



//Encapsulation (data hiding example)
class Account{
private:
    string password;//we are hiding this datas because ,no one outside class unable to access it
    double balance;//both
public:
    string AccoundId;
    string Accountname;
};

class Student{
public:
    string name;
    string usn;
    int rollno;
    double* percentage;
    
    Student(){
        cout<<"hey i am from student constructor";
    }
    Student(string name,string usn,int rollno,double percentage){
        this->name=name;
        this->usn=usn;
        this->rollno=rollno;

    }
    void getInfo(){
        cout<<"Name" <<name<<endl;
        cout<<"USN" <<usn<<endl;
        cout<<"RollNo" <<rollno<<endl;
    }
};

int main(){
    // Teacher t1;//here constructor invoved
    // t1.name="Ganesh";
    // t1.deprt="ECE";
    // t1.setSalary(25000);
    // t1.subject="VLSI";
    // cout<<t1.name;
    // cout<<t1.deprt;
    // cout<<t1.getSalary()<<endl;
    Student S1("Ganesh","1CR22EC072" ,72);
    S1.getInfo();
}