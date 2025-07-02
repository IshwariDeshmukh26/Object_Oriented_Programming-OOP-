# include<iostream>
using namespace std;
class Person
{
public:
    string name;
    void Hello()
    {
        cout<<"Hello my name is "<<name<<endl;
    }
};
int main()
{
    Person p1; //Creating an object
    p1.name = "Ishwari";    //Assigning value
    p1.Hello(); //Calling method
    return 0;
}
