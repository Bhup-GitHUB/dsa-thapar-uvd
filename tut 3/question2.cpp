// 2. Multiple Inheritance
// Write a C++ program to demonstrate multiple inheritance. In this example, create two base
// classes: `Engineer` with a protected data member `engField`, and `Manager` with a protected
// data member `teamSize`. Then, derive a class `TechManager` from both `Engineer` and
// `Manager`, which will combine the attributes of both base classes. The `TechManager` class
// should display details related to both engineering field and team management.


#include <iostream>

using namespace std;


class Engineer{
    protected:
        string engField;

    public: 
        void setEngField(string field){
            engField=field;
        }
};



class Manager{
        protected:
            int teamSize;

        public:
            void setTeamSize(int size){
                teamSize=size;
            }
};

class Techmanager: public Engineer, public Manager{
        public:
            void display(){
                cout<<"Engineering Field: "<<engField<<endl;
                cout<<"Team Size: "<<teamSize<<endl;
            }

};


int main(){
    Techmanager t;
    t.setEngField("Software");
    t.setTeamSize(10);
    t.display();


}