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
        ~Base()
        {
            cout<<"Base destructor\n";
        }
};

class Derived1 : public Base
{
    public: 
        int a;
        Derived1()
        {
            cout<<"Derived1 constructor\n";
        }
        ~Derived1()
        {
            cout<<"Derived1 destructor\n";
        }
};

class Derived2 : public Base
{
    public: 
        int b;
        Derived2()
        {
            cout<<"Derived2 constructor\n";
        }
        ~Derived2()
        {
            cout<<"Derived2 destructor\n";
        }
};

int main()
{

    Derived1 dobj1;
    Derived2 dobj2;

    cout<<"Size of Base is : "<<sizeof(Base)<<"\n";             // 8
    cout<<"Size of Derived1 is : "<<sizeof(Derived1)<<"\n";               // 12
    cout<<"Size of Derived2 is : "<<sizeof(Derived2)<<"\n";     // 12

    return 0;
}