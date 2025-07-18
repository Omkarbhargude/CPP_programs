#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        int Addition(int no1, int no2)  {   return no1 + no2;   }   // 1000
        virtual int Substraction(int no1, int no2) = 0;             // --- 
};

class Derived : public Base
{
    public:
        int x,y;
        int Substraction(int no1, int no2)  {   return no1 - no2;   }       // 2000
        int Multiplication(int no1, int no2)  {   return no1 * no2;   }     // 3000
};

int main()
{
    Base *bp = NULL;
    Derived dobj;

    bp = &dobj;

    cout<<bp->Addition(10,11)<<"\n";
    cout<<bp->Substraction(10,11)<<"\n";
    // cout<<bp->Multiplication(10,11)<<"\n";
    
    return 0;
}
