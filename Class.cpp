#include<iostream>// Includes the standard input-output stream library
using namespace std;// Allows the use of standard names like cout and endl without the "std::" prefix

class Car // Defines a class named 'Car'
{ 
public: // Access specifier: Allows members to be accessed from outside the class
    void model() // Member function of the class, which prints the car model
    {
        cout<<"Car model is Suzuki"<<endl; // Prints "Car model is Suzuki" to the console
    }
    
};
int main()
{
    Car obj;    //Creating an object
    obj.model();    //Calling method
    return 0;
}