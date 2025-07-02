#include<iostream>
using namespace std;

class A{
public:
    void showA(){
        cout<<"Class A"<<endl;
    }
};
class B:public A{
    public:
        void showB(){
            cout<<"Class B"<<endl;
        }
};
class C{
    public:
        void showC(){
            cout<<"Class A"<<endl;
        }
};
class D: public B,public C{

};
int main()
{
    D obj;
    obj.showA();
    obj.showB();
    obj.showC();
    return 0;
}