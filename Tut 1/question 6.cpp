//chutoye se pattern print karwane ha 

#include <iostream>

using namespace std;

int maint(){
    string pattern;

    cout<<"enter the pattern you want pprint: ";
    cin>>pattern;
    
    for (int i=0; i<pattern.length(); i++){
        cout<<pattern[i];
    }
    return 0;
}