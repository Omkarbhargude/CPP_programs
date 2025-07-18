#include<iostream>
using namespace std;
class Demo
{
    public:
        int i,j;
        Demo()
        {
            cout<<"Inside Constructor\n";
        }
        ~Demo()
        {
            cout<<"Inside Destructor\n";
        }
};

int  main()
{
    Demo *p = NULL;

    p = new Demo;

    cout<<"USE\n";

    delete p;
    
    return 0;
}