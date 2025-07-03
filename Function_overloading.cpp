#include<iostream>
using namespace std;

class Demo{
    public:
    void show()
    {
        cout<<"No paraneters"<<endl;
    }
    void show(int a)
    {
        cout<<"One parameter"<<a<<endl;
    }
};
int main() {
    Demo d;
    d.show();      // Calls the version with no parameters
    d.show(5);     // Calls the version with one int parameter
    return 0;
}