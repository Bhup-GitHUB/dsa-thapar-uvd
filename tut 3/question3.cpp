#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    void setName(string name) {
        this->name = name;
    }
};

class Student {
protected:
    int rollNo;

public:
    void setRollNo(int rollNo) {
        this->rollNo = rollNo;
    }
};

class Employee {
protected:
    int employeeID;

public:
    void setEmployeeID(int id) {
        employeeID = id;
    }
};

class WorkingStudent : public Student, public Employee {
public:
    WorkingStudent(string n, int rollNo, int employeeID) {
        name = n;
        this->rollNo = rollNo;
        this->employeeID = employeeID;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Employee ID: " << employeeID << endl;
    }
};

int main() {
    WorkingStudent ws("John Doe", 12345, 67890);
    ws.display();
    return 0;
}
