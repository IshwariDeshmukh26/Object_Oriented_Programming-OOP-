#include<iostream>
using namespace std;

class Parent{
public:
    void showA()
        {
            cout<<"Single Inheritance"<<endl;
        }
};
class Child:public Parent{
};
int main()
{
    Child obj;
    obj.showA();
    return 0;
}