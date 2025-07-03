#include<iostream>
using namespace std;

//base class
class Animal{
    public:
    void animalSound()
    {
        cout<<"This animal makes a sound\n";

    }
};

//derived class
class Pig:public Animal{
    public:
    void animalSound()
    {
        cout<<"The pig says:wee wee\n";
    }
};
//derived class
class Dog:public Animal{
    public:
    void animalSound()
    {
        cout<<"The Dog says:bow bow\n";
    }
};