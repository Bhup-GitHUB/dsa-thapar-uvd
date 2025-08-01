// 4. Write a C++ program for the following tasks: 
// a) Find the number of elements in an array. 
// b) Calculate the sum and average of elements in an array. 
// c) Find the maximum and minimum values in an array. 
// d) Sort the array in ascending and descending order. 


#include <bits/stdc++.h>
#include <algorithm>


using namespace std;

int main(){
    //a) Find the number of elements in an array.

    int arr[5]= { 1,2,3,4 ,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"size of array is "<<size<<endl;


    //b) Calculate the sum and average of elements in an array.
    int ar[5]= {1,2,3,4,5};
    int sum =0;

    for (int i=0; i<5; i++){
        sum = sum + ar[i];
        cout<< "sum is :"<< sum <<endl;        
    }

    //c) Find the maximum and minimum values in an array.
    int arrnew[] = {10, 5, 20, 8, 15};
    int n = sizeof(arrnew) / sizeof(arrnew[0]);  // agar array input lunga to use this to get the size of array

   \
    int minimum = *min_element(arrnew, arrnew + n);
    int maximum = *max_element(arrnew, arrnew + n);

    cout << "Minimum value: " << minimum << endl;
    cout << "Maximum value: " << maximum << endl;
}