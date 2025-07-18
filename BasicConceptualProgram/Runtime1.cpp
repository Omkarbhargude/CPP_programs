#include<iostream>
using namespace std;

// Overloading
class Demo
{
    public:
        void Fun()
        {}
        void Fun(int i)
        {}
        void Fun(int i, int j)
        {}
};

int main()
{
    Demo dobj;
    
    dobj.Fun();
    dobj.Fun(11);
    dobj.Fun(11,21);
    

    return 0;
}