#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j,k;
};

class Hello : public Demo
{
    public:
        int x,y;
};

int main()
{
    Demo *dp = new Hello;    // Upcasting
    Hello *hp = new Demo;   // Downcasting NOT ALLOWED

    return 0;
}