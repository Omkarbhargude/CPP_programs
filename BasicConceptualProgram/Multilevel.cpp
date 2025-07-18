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

class Derived : public Base
{
    public:
        int k;
        Derived()
        {
            cout<<"Derived constructor\n";
        }
        ~Derived()
        {
            cout<<"Derived destructor\n";
        }
};

class DerivedX : public Derived
{
    public:
        int p,q;
        DerivedX()
        {
            cout<<"DerivedX constructor\n";
        }
        ~DerivedX()
        {
            cout<<"DerivedX destructor\n";
        }
};

int main()
{
    DerivedX dobj;

    cout<<"Size of Base is : "<<sizeof(Base)<<"\n";             // 8
    cout<<"Size of Derived is : "<<sizeof(Derived)<<"\n";       // 12
    cout<<"Size of DerivedX is : "<<sizeof(DerivedX)<<"\n";     // 20

    return 0;
}