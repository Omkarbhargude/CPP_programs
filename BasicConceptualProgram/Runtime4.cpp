#include<iostream>
using namespace std;

// Redefination
class Demo
{
    public:
        void Fun()
        {
            cout<<"Base Fun\n";
        }
};

class Hello : public Demo
{
    public:
        void Fun()
        {
            cout<<"Derived Fun\n";
        }
};

int main()
{
    Hello hobj;

    hobj.Fun();

    return 0;
}