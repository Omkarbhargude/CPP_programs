#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        virtual void Fun()  {    cout<<"Base Fun\n";    }   // 1000
        virtual void Gun()  {   cout<<"Base Gun\n";     }   // 2000
        virtual void Sun()  {   cout<<"Base Sun\n";     }   // 3000
        void Run()  {   cout<<"Base Run\n";     }           // 4000
};

class Derived : public Base
{
    public:
        int x,y;
        void Fun()      {   cout<<"Derived Fun\n";  }           // 5000
        virtual void Gun()  {   cout<<"Derived Gun\n";     }    // 6000
        virtual void Run()  {   cout<<"Derived Run\n";     }    // 7000
        virtual void Mun()  {   cout<<"Derived Mun\n";     }    // 8000
};

int main()
{
    cout<<sizeof(Base)<<"\n";       // 12
    cout<<sizeof(Derived)<<"\n";      // 20
    
    Base *dp = new Derived;    // Upcasting

    dp->Fun();                  // Base Fun 

    return 0;
}