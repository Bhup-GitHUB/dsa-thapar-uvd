// 1. Single Inheritance
// Write a C++ program to demonstrate single inheritance. In this program, create a base class
// `Person` with protected data members `name` and `age`. Then, derive a class `Student` from
// `Person`, which adds a private data member `rollNo`. The `Student` class should access the
// base class members and provide functionality to display the personal information along with
// the roll number

#include <iostream>
using namespace std;

class Person{
    protected:
        string name;
        int age;

    public:
        //constructor here 
        Person(const string &n, int age){
            name=n;
            this->age=age;
        };
};

class Student: protected Person{
    private:
        int rollNo;

    public: 
        void setRollno(int rollnotemp){
            rollNo=rollnotemp;
        }

        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;            
            cout<<"Rollno: "<<rollNo<<endl;
        }

        Student(const string &n, int age, int rollnotemp): Person(n,age){
            
            rollNo=rollnotemp;
        }
};


int main() {
   
    Student s("John Doe", 20, 101);

    
    s.display();

    return 0;
}