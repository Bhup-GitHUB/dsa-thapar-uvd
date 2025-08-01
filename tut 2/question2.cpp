#include <iostream>


using namespace std;

class Student{
    public:
        string name;
        int rollno;
        string degree;
        string hostel;


    private:
        float cgpa;


    void addDetails() // to input student details
    { 
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter rollno: ";
        cin>>rollno;
        cout<<"Enter degree: ";
        cin>>degree;
        cout<<"Enter hostel: ";
        cin>>hostel;
    }

    void updateDetails() {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter rollno: ";
        cin>>rollno;
        cout<<"Enter degree: ";
        cin>>degree;
        cout<<"Enter hostel: ";
        cin>>hostel;
    }
        void updateCGPA(float newCGPA){
            int newcgpa;
            cgpa= newcgpa;
            cout<<"Your new cgpa is: "<<cgpa<<endl;
        }

        void updateHostel(string newHostel){
            hostel= newHostel;
            cout<<"Your new hostel is: "<<hostel<<endl;
        }
        
        void displayDetails() {
            cout<<"Name: "<<name<<endl;
            cout<<"Rollno: "<<rollno<<endl;
            cout<<"Degree: "<<degree<<endl;
            cout<<"Hostel: "<<hostel<<endl;
            cout<<"Cgpa: "<<cgpa<<endl;
        }
    };
    int main(){
        Student s;
        // s.addDetails();
        // s.displayDetails();
        // s.updateDetails();
        // s.displayDetails();
        // s.updateCGPA(9.5);
        // s.displayDetails();
        // s.updateHostel("A");
        // s.displayDetails();
        return 0;

};