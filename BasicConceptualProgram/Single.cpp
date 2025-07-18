#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        Base()
        {
            cout<<"Base constructor\n";
        }
};

class Derived : public Base
{
    public:
        int k;
        Derived()
        {
            cout<<"Derived constructor\n";
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<"Size of base is : "<<sizeof(bobj)<<"\n"; // 8
    cout<<"Size of derived is : "<<sizeof(dobj)<<"\n";  // 12

    return 0;
}