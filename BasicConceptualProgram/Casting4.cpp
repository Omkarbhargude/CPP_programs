#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;
        void Fun()
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
    cout<<sizeof(Demo)<<"\n";       // 8
    cout<<sizeof(Hello)<<"\n";      // 16
    
    Demo *dp = new Hello;    // Upcasting

    dp->Fun();                  // Base Fun 

    return 0;
}