#include<iostream>
using namespace std;

class Grandparent{
public:
    void show(){
        cout<<"Grandparent Class"<<endl;
    }
};
class Parent:public Grandparent{
};
class Child:public Parent{
};
int main()
{
    Child obj;
    obj.show();
    return 0;
}