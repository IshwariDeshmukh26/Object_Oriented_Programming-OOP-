#include<iostream>
using namespace std;

class Animal{
public:
    void eat()
    {
        cout<<"Eating"<<endl;
    }
};
class Dog : public Animal{  // Dog inherits Animal
public:
    void bark()
    {
        cout<<"Barking"<<endl;
    }
};
int main()
{
    Dog d;
    d.eat();//Inherit method
    d.bark();//own method
    return 0;
}
