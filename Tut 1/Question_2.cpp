
// Write a C++ program that prompts the user to enter their name and city. The 
// program should then display the following formatted output: 
// Name: [user's name] 
// City: [user's city] 
// Country: India 
// Replace [user's name] and [user's city] with the actual inputs provided by the user.

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    string name, city;
    cout<<"Enter your name: ";
    cin>> name;

    cout<< "enetr you city: ";
    cin>> city;

    cout<< "Name:" << name << endl;
    cout << "city: "<< city<<  endl;
    cout << "Country: India" << endl;
 

    return 0;

}
