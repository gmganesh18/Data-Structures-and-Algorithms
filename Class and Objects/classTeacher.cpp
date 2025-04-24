#include<iostream>
#include<string>
using namespace std;
class Teacher{
private:
    double salary;
public:
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



int main(){
    Teacher t1;
    t1.name="Ganesh";
    t1.deprt="ECE";
    t1.setSalary(25000);
    t1.subject="VLSI";
    cout<<t1.name;
    cout<<t1.deprt;
    cout<<t1.getSalary()<<endl;
}