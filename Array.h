#include <iostream>
using namespace std;

//header file of the class array
//non-implementation file
//no definitions allowed here

class Array
{
    public:

    int get();
    //postcondition: returns the value of the address to which the current is pointing at

    void update(int);
    //postcondition: updates the value / replace the value at he address to which the current is pointing at with parameter

    int length();
    //postcondition : returns the size of the array

    void back();
    //precondtion: make sure that the current pointer is does not exceed the length of the array
    //postcondition: moves the current pointer one step back from current address

    void next();
    //precondition: make sure that the current pointer does not exceed the length of the array
    //postcondition : moves the current pointer one step back from current address

    void start();
    //postcondition: returns the current pointer to the first element on the array

    void end();
    //postcondition: returns the current pointer to the last element on the array
    
    void remove();
    //postcondition: removes the value the current pointer is pointing at, decrements size, and shifts the values towards the value which was removed
    
    void insert();
    //postcondition: add or inserts one position ahead of the current pointer, increments the size, and shifts the older data one position away from  the new addition
    
    Array(); 
    //default, non parameterized constructor to initialize the array to size of 8
    
    Array(int);
     // parameterized constructor which initializes the array to the size = int;

    private:

    int length; //variable to store the total length of the array

    int *current;//pointer to store the address of the value pointed by it

    int size;//variable to store the number of elements

    int A[size]; //the array data structure

    int *first; // points to first address of array

    int *last; // last address of array







};


// Implementing the above dictionaries(operations) on array data strcuture without using 
//indexes of arrays