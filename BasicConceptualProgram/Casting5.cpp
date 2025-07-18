#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;
        virtual void Fun()
        {
            cout<<"Base Fun\n";
        }
};

class Hello : public Demo
{
    public:
        int x,y;
        void Fun()
        {
            cout<<"Derived Fun\n";
        }
};

int main()
{
    cout<<sizeof(Demo)<<"\n";       // 12
    cout<<sizeof(Hello)<<"\n";      // 20
    
    Demo *dp = new Hello;    // Upcasting

    dp->Fun();                  // Base Fun 

    return 0;
}