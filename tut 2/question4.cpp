// 4. Object as Argument and Return
// Write a C++ program to demonstrate passing an object as an argument and returning the
// object from a function. Use either pass-by-value or pass-by-reference. Create a class
// 'Example' with the following members:
// - Data Member: int data
// - Member Functions:
// • void setData(int value) - to set the value of data.
// • void displayData() - to display the value of data.
// • Example returnObjectByValue() - to return an object with modified data (using pass-
// by-value).
// • void modifyObjectByReference(Example &obj) - to modify an object using pass-by-
// reference.


#include <iostream>
using namespace std;

class Example{
    public: 
        int data;


        void setData(int value){
            cout<<"Setting data to: "<<value<<endl;
            data=value;

        }
        void displayData(){
            cout<<"Data is: "<<data<<endl;
        }
        Example returnObjectByValue(){
            Example obj;
            obj.data=data+10;
            return obj;
        }
        void modifyObjectByReference(Example &obj){
            obj.data=obj.data+10;
        }
};


int main(){

}